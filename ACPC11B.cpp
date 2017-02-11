#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int t,n,m,mini,a[1001],b[1001],j,i;
    scanf("%d",&t);
    while(t--)
    {
        mini=1000001;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&m);
        for(i=0;i<m;i++)
            scanf("%d",&b[i]);
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
            {
                if(abs(a[i]-b[j])<mini)
                    mini=abs(a[i]-b[j]);
            }
        printf("%d\n",mini);
    }
    return 0;
}

