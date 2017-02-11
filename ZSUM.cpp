#include<iostream>
#include<cstdio>
#define mod 10000007
#define lli long long int
using namespace std;

lli pow(lli a,lli b)
{
    if(b==1)
        return a%mod;
    lli p=pow(a,b/2);
    p=(p*p)%mod;
    if(b&1)
        return (p*(a%mod))%mod;
    else
        return p;
}

int main()
{
    lli n,k,a[4];
    while(1)
    {
        scanf("%lld%lld",&n,&k);
        if(!n)
            break;
        a[0]=pow(n-1,k);
        a[1]=pow(n-1,n-1);
        a[2]=pow(n,k);
        a[3]=pow(n,n);
        a[0]=(a[0]+a[1])%mod;
        a[0]=(2*a[0])%mod;
        a[2]=(a[2]+a[3])%mod;
        a[0]=(a[0]+a[2])%mod;
        printf("%lld\n",a[0]);
    }
    return 0;
}
