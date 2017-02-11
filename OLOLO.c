#include<stdio.h>

int main()
{
    long long int n,i,a,res=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        res=a^res;
    }
    printf("%lld",res);
    return 0;
}
