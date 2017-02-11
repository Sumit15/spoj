#include<stdio.h>

int main()
{
    int t,n,i,p;
    long long int a,s;
    scanf("%d",&t);
    while(t--)
    {
        s=0;
        scanf("%d",&n);
        p=1-n;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a);
            s+=p*a;
            p=p+2;
        }
        printf("%lld\n",s);
    }
    return 0;
}
