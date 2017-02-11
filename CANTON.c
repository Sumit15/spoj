#include<stdio.h>

int main()
{
    long int i,n,x;
    int t,j;
    scanf("%d",&t);
    while(t--)
    {
        j=1;
        scanf("%ld",&n);
        for(i=1;1;i++,j*=-1)
            if((i*i+i)/2 >= n)
            break;
        i--;
        x=n-((i*i+i)/2);
        //printf("%ld %ld %d\n",i,x,j);
        if(j==1)
            printf("TERM %ld IS %ld/%ld\n",n,i-x+2,x);
        else
            printf("TERM %ld IS %ld/%ld\n",n,x,i-x+2);
    }
    return 0;
}
