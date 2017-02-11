#include<stdio.h>

int main()
{
    int a;
    long long int b;
    while(1)
    {
        scanf("%d",&a);
        if(!a)
            break;
        b=(a*(a+1)*(2*a+1))/6;
        printf("%lld\n",b);
    }
    return 0;
}
