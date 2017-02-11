#include<stdio.h>

int main()
{
    long long int a[1000001],k=0,p,x=1;
    int n,i;
    a[1]=1;
    for(i=2;i<1000001;)
    {
        for(p=1;p<=k && i<1000001;p++)
            a[i++]=2*p;
        k++;
        x=power(2,k);
    }
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        printf("%lld\n",a[n]);
    }
    return 0;
}
