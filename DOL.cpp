#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int t,i;
    long long n;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        while(!(n&1))
            n/=2;
        printf("Case %d: %lld\n",i,n);
    }
    return 0;
}
