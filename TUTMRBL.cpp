#include<iostream>
#include<cstdio>

using namespace std;

int a[10000000];

int main()
{
    int i,n,m,r,k=0,j,s,x,p[664600],b[40];
    for(i=2;i<10000000;i++)
    {
        if(!a[i])
        {
            r=i;
            p[k++]=i;
            for(j=2*i;j<10000000;j=j+r)
                a[j]=1;
        }
    }
    while(true)
    {
        k=0;
        s=1;
        scanf("%d",&n);
        if(!n)
            break;
        m=n;
        for(i=0;m>1;i++)
        {
            x=1;
            while(!(m%p[i]))
            {
                m/=p[i];
                b[k++]=p[i];
                x++;
            }
            s=s*x;
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
