#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    long long int i=1,a[4];
    while(scanf("%lld",&a[0]) != EOF)
    {
        scanf("%lld%lld%lld",&a[1],&a[2],&a[3]);
        sort(a,a+4);
        printf("Case %lld: %lld\n",i,a[3]+a[2]);
        i++;
    }
    return 0;
}
