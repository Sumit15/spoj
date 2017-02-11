#include<stdio.h>

int main()
{
    int t,m,n,x,i,s,d;
    scanf("%d",&t);
    while(t--)
    {
        s=0;
        scanf("%d%d%d",&n,&m,&d);
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            s+=x/d;
            if(x%d==0)
                s--;
        }
        if(s>=m)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
