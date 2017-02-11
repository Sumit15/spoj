#include<iostream>
#include<cstdio>
#define mod 1000000007

using namespace std;

long long int power(long long int a,int b)
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
long long a[2000000];
int main()
{
    int t,i,n;
    long long int s1,s2;
    scanf("%d",&t);
    a[0]=a[1]=1;
    for(i=2;i<2000000;i++)
            a[i]=(a[i-1]*i)% mod;
    while(t--)
    {
        scanf("%d",&n);
        s1=(n*a[2*n-1])%mod;
        s2=(a[n]*a[n-1])%mod;
        s2=power(s2,mod-2);
        s1=(s1*s2)%mod;
        printf("%lld\n",s1);
    }
    return 0;
}
