#include<stdio.h>

int main()
{
    int t;
    long long int a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&a);
        printf("%lld\n",192+250*(a-1));
    }
}
