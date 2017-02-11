#include<stdio.h>

int main()
{
    int t,s,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&s,&b);
        if(b<s && 2*b<=s)
        {
            printf("%d\n",b);
            continue;
        }
        if(s<b && 2*s<=b)
        {
            printf("%d\n",s);
            continue;
        }
        printf("%d\n",(s+b)/3);
    }
    return 0;
}

