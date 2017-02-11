#include<stdio.h>

int main()
{
    int i,t,n,q,j,x,y,curr,pre,s[100002];
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        //printf("Case %d:\n",j);
        scanf("%d%d",&n,&q);
        pre=-1;
        s[0]=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&curr);
            if(curr!=pre)
                s[i]=s[i-1]+1;
            else
                s[i]=s[i-1];
            pre=curr;
        }
        //for(i=0;i<=n;i++)
        //    printf("%d ",s[i]);
        //printf("\n");
        printf("Case %d:\n",j);
        for(i=0;i<q;i++)
        {
            scanf("%d%d",&x,&y);
            if(s[x]==s[x-1])
                printf("%d\n",s[y]-s[x-1]+1);
            else
                printf("%d\n",s[y]-s[x-1]);
        }
    }
    return 0;
}
