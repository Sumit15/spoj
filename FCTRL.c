#include<stdio.h>
#include<math.h>

int main()
{
    long long int t,p,s,i,n;
    scanf("%lld",&t);
    while(t--)
    {
        s=0,p=1;
        scanf("%lld",&n);
        for(i=1;p;i++)
        {
            p=n/pow(5,i);
            s+=p;
        }
        printf("%lld\n",s);
    }
    return 0;
}
