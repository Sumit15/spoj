#include<stdio.h>

int main()
{
    int n,q,l,r,k,i,j,p;
    long long int a,s[100005]={0},sum;
    scanf("%d%d",&n,&q);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a);
        s[i]=s[i-1]+a;
    }
    for(i=0;i<q;i++)
    {
        sum=0;
        scanf("%d%d%d",&l,&r,&k);
        p=(r-l+1)/k;
        for(j=0;j<p;j++)
        {
            if(j&1)
                sum-=(s[l-1+(j+1)*k]-s[l-1+j*k]);
            else
                sum+=(s[l-1+(j+1)*k]-s[l-1+j*k]);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
