#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int t,a,b,gcd;
    cin>>t;
    while(t--)
    {
        scanf("%d%d",&a,&b);
        gcd=__gcd(a,b);
        printf("%d %d\n",b/gcd,a/gcd);
    }
    return 0;
}
