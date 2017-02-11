#include<stdio.h>
#define ll long long int
int main()
{
    int n,t,m,i,y,x;
    ll cur, pre, prepre,s;
    scanf("%d",&t);
    while(t--)
    {
        s=m=y=0;
        scanf("%d%lld",&n,&pre);
        s+=pre;
        for(i=1;i<n;i++)
        {
            scanf("%lld",&cur);
            s+=cur;
            x=cur-pre;
            if(x && (x==y || abs(x)>1 ))
                m=1;
            pre=cur;
            y=x;
        }
        if(s%(n-1))
            m=1;
        if(m)
            printf("-1\n");
        else
            printf("%lld\n",s/(n-1));
    }
    return 0;
}
