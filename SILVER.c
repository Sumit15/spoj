#include<stdio.h>

int main()
{
    int n,p,i;
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        for(i=0;i<15;i++)
            if((n>>i)&1)
                p=i;
        printf("%d\n",p);
    }
    return 0;
}
