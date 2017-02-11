#include<stdio.h>

long long int power(int a,int b)
{
    if(b==0)
        return 1;
    long long int x=power(a,b/2);
    if(b&1)
        return x*x*a;
    else
        return x*x;
}

int main()
{
    int n,i;
    for(i=1;;i++)
    {
        scanf("%d",&n);
        if(!n)
            break;
        if(n<2)
        {
            printf("Case 1, N = 1, # of different labelings = 1\n");
            continue;
        }
        printf("Case %d, N = %d, # of different labelings = %lld\n",i,n,power(n,n-2));
    }
    return 0;
}
