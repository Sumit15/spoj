#include<stdio.h>

int main()
{
    long long int t,a,b,c,s,d,a0,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        n=(2*c)/(a+b);
        d=(b-a)/(n-5);
        a0=a-2*d;
        printf("%lld\n",n);
        s=a0;
        for(i=0;i<n;i++)
        {
            printf("%lld ",s);
            s+=d;
        }
        printf("\n");
    }
    return 0;
}
