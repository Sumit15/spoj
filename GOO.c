#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,n,m,p;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        p=pow(2,n-1);
        printf("%lld %lld\n",p,(n-1)*(p/2)+p);
    }
}
