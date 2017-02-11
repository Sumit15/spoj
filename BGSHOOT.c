#include<stdio.h>

int main()
{
    int n,q,max,a[1000000001]={0};
    long long int i,j,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld%lld",&x,&y);
        for(j=x;j<=y;j++)
            a[j]++;
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%lld%lld",&x,&y);
        max=0;
        for(j=x;j<=y;j++)
            if(a[j]>max)
            max=a[j];
        printf("%d\n",max);
    }
    return 0;
}
