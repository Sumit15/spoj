#include<iostream>
#include<cstdio>
#define mod 1000000007

using namespace std;

long long int modInverse(long long int a,long long int m)
{
    long long int m0 = m, t, q;
    long long int x0 = 0, x1 = 1;

    while (a > 1)
    {
        // q is quotient
        q = a / m;
        t = m;
        // m is remainder now, process same as
        // Euclid's algo
        m = a % m, a = t;

        t = x0;

        x0 = x1 - q * x0;

        x1 = t;
    }

    // Make x1 positive
    if (x1 < 0)
       x1 += m0;

    return x1;
}

int main()
{
    int t,i,n;
    long long int s1,s2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        s1=s2=1;
        for(i=n;i<2*n;i++)
            s1=(s1*i)% mod;
        for(i=2;i<n;i++)
            s2=(s2*i)% mod;
        s2=modInverse(s2, mod - 2);
        s1=(s1*s2)% mod;
        printf("%lld\n",s1);
    }
    return 0;
}

