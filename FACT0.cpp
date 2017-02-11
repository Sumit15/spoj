#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i,x;
    long long n;
    while(1)
    {
        scanf("%lld",&n);
        if(!n)
            break;
        x=0;
        while(!(n%2))
            {
                n/=2;
                x++;
            }
        if(x)
        printf("2^%d ",x);
        for(i=3;n>1 && i*i<=n;i=i+2)
        {
            x=0;
            while(!(n%i))
            {
                n/=i;
                x++;
            }
        if(x)
        printf("%d^%d ",i,x);
        }
        if(n>1)
            printf("%d^1 ",n);
        printf("\n");
    }
    return 0;
}
