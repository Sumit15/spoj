#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    int t,n,i,j,mini,a[1000],b[1000],c[1000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                if(!b[j])
                {
                    mini=j;
                    break;
                }
            for(;j<n;j++)
            {
                if(!b[j] && a[j]<a[mini])
                    mini=j;
            }
            //printf("%d ",mini);
            //printf("\n");
            c[i]=a[mini];
            b[mini]=-1;
            for(j=0;j<n;j++)
                if(a[j]<a[mini] && b[j]!=-1)
                b[j]--;
        }
        for(i=0;i<n;i++)
            printf("%d ",c[i]);
        printf("\n");
    }
    return 0;
}
