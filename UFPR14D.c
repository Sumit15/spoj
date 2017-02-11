#include<stdio.h>

int main()
{
    int s[100002],q,i,x,y,n;
    scanf("%d",&n);
    s[0]=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        s[i]=x+s[i-1];
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d%d",&x,&y);
        printf("%d\n",s[y]-s[x-1]);
    }
    return 0;
}
