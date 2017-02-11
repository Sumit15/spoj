#include<iostream>
#include<cstdio>
#define mod 1000000007
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
    int
    scanf("%d",&t);
    while(t--)
    {

    }
    return 0;
}
