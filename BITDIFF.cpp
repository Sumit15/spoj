#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long long int t,n,p,s,a[10000],i,j,c,k;
    scanf("%lld",&t);
    for(k=1;k<=t;k++)
    {
        p=1;
        s=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(i=0;i<32;i++)
        {
            c=0;
            for(j=0;j<n;j++)
                if(a[j]&p)
                c++;
            s=(s+(c*(n-c))%10000007)%10000007;
            p=p<<1;
        }
        printf("Case %lld: %lld\n",k,s*2);
    }
    return 0;
}
