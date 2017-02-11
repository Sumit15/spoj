#include<stdio.h>

int main()
{
    int t,l,n,i,j,s[1005],c,r,d,a,b,m,h;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&l,&n);
        for(i=0;i<=l;i++)
            s[i]=0;
        for(i=0;i<n;i++)
        {
            scanf("%d%d%d",&c,&r,&d);
            a=c-r;
            b=c+r;
            if(a<1)
                a=1;
            if(b>l)
                b=l;
            for(j=a;j<=b;j++)
                s[j]+=d;
        }
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&h);
            j=1;
            while(h>0 && j<l+1)
            {
                h-=s[j];
                j++;
            }
            if(j==l+1 && h>0)
                printf("Bloon leakage\n");
            else
                printf("%d\n",j-1);
        }
    }
    return 0;
}
