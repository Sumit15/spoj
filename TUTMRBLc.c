#include<stdio.h>

int main()
{
    int i,n,m,r,k,j,s,x,b[40];
    while(1)
    {
        k=0;
        s=1;
        scanf("%d",&n);
        if(!n)
            break;
        m=n;
        x=1;
        while(!(m%2))
            {
                m/=2;
                b[k++]=2;
                x++;
            }
        s=s*x;
        for(i=3;m>1 && i*i<=m;i=i+2)
        {
            x=1;
            while(!(m%i))
            {
                m/=i;
                b[k++]=i;
                x++;
            }
            s=s*x;
        }
        if(m>1)
        {
            b[k++]=m;
            s*=2;
        }
        printf("%d = %d",n,b[0]);
        for(i=1;i<k;i++)
            printf(" * %d",b[i]);
        printf("\n");
        if(s&1)
        s=(s+1)/2;
        else
        s=s/2;
        printf("With %d marbles, %d different rectangles can be constructed.\n",n,s);
    }
    return 0;
}
