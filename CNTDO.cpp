#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int c,b[1002],a[20005],i,t,n;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        for(i=0;i<20005;i++)
            a[i]=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
            if(b[i]<0)
                a[10000-b[i]]++;
            if(b[i]>0)
                a[b[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(abs(b[i])>5000)
                continue;
            if(b[i]>0 && a[b[i]*2])
                c++;
            if(b[i]<0 && a[10000-(b[i]*2)])
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
