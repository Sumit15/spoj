#include<stdio.h>

int main()
{
    long long int pre,b,n,i,curr,s=0;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        pre=6;
        b=5;
        s=6;
        for(i=1;i<n;i++)
        {
            b=(10*(b%1000000007))%1000000007;
            curr=((pre%1000000007)+b)%1000000007;
            s=(s+curr)%1000000007;
            pre=curr;
            //printf("%lld %lld\n",pre,b);
        }
        //printf("%lld %lld\n",pre,b);
        printf("%lld\n",s);
    }
    return 0;
}
