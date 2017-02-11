#include<stdio.h>

int main()
{
    int t;
    long long int n,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n==1)
        {
            printf("0\n");
            continue;
        }
        if(n==2)
        {
            printf("1\n");
            continue;
        }
        p=n/2;
        if(n&1)
            printf("%lld\n",p);
        else
        {
            if(p&1)
                printf("%lld\n",p-2);
            else
                printf("%lld\n",p-1);
        }
    }
    return 0;
}
