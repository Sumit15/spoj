#include<stdio.h>

long long int fun(long long int n)
{
    return n/2+n/3+n/4;
}

int main()
{
    long long int n,i,s,max;
    while((scanf("%lld",&n)) != EOF)
    {
        max=0;
        for(i=0;i<=n;i++)
        {
            s=fun(i)+n-i;
            if(s>max)
                max=s;
        }
        printf("%lld\n",max);
    }
    return 0;
}
