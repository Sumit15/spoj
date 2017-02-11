#include<cstdio>
#include<iostream>
#include<algorithm>
#define lli int

using namespace std;

lli bs(lli *a,lli in,lli fi,lli q)
{
    lli m=(in+fi)/2;
    if(in==fi)
        return in;
    if(q==a[m])
        return m;
    if(a[m]>q)
        bs(a,in,m-1,q);
    else
        bs(a,m+1,fi,q);
}

int main()
{
    lli n,i,j,k,a[100000],s;
    lli sum;
    while(1)
    {
        sum=0;
        scanf("%d",&n);
        if(!n)
            break;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        for(i=0;i<n-2;i++)
        {
            for(j=i+1;j<n-1;j++)
            {
                s=a[i]+a[j];
                for(k=bs(a,j+1,n-1,s);k<n;k++)
                    if(a[k]>s)
                    break;
                sum+=n-k;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
