#include<iostream>
#include<cstdio>
#define mod 1000000007

using namespace std;

long long int power(long long int a,long long int b)
{
    if(b==0)
        return 1;
    long long int x=power(a,b/2)% mod;
    x=(x*x)% mod;
    if(b&1)
        return (x*(a% mod))% mod;
    else
        return x;
}

int main()
{
    int t,i;
    long long n,m,x,y,p;
    cin>>t;
    while(t--)
    {
        scanf("%lld%lld",&m,&n);
        p=power(m,n);
        x=(((p-1)%mod)*power(m-1,mod-2))%mod;
        y=p;
        printf("%lld %lld\n",x,y);
    }
    return 0;
}
