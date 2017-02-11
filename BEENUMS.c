#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,s,n,i;
    while(1)
    {
        s=0;
        scanf("%lld",&a);
        if(a==-1)
            break;
        n=a/3;
        //printf("%lld ",n);
        n=sqrt(n);
        //printf("%lld ",n);
        for(i=n;s<=a;i++)
            s=(3*i*i-3*i+1);
        //printf("%lld %lld ",i,s);
        i=i-2;
        s=(3*i*i-3*i+1);
        //printf("%lld \n",s);
        if(s==a)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
