#include<stdio.h>

int main()
{
    int t,n,i,j;
    long long int a,s,min;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        min=s=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a);
            s+=a;
            if(s<min)
                min=s;
        }
        min*=-1;
        printf("Scenario #%d: %lld\n",i,min+1);
    }
    return 0;
}
