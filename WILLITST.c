#include<stdio.h>

int main()
{
    long long int n,a[10002],m=1,j=1,i;
    scanf("%lld",&n);
    a[0]=n;
    while(j<=10000)
    {
        if(n<=1)
            break;
        if(n%2==0)
            n/=2;
        else
            n=3*n+3;
        a[j++]=n;
        for(i=0;i<j-1;i++)
            if(a[i]==a[j-1])
            {
                m=0;
                break;
            }
        if(m==0)
            break;
    }
    if(m)
        printf("TAK");
    else
        printf("NIE");
}
