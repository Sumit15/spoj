#include<stdio.h>

int main()
{
    int a=0,b=0,c=0,s=0,n,i,x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%*c%d",&x,&y);
        if(y==4)
        {
            if(x==1)
                a++;
            else
                c++;
        }else
            b++;
    }
    //printf("%d %d %d\n",a,b,c);
    if(a<c)
        a=0;
    else
        a-=c;
    s+=c;
    if(b%2)
    {
        s+=(b/2);
        if(a<=2)
            printf("%d",s+2);
        else
        {
            a-=2;
            if(a%4)
                printf("%d",s+3+a/4);
            else
                printf("%d",s+2+a/4);
        }
    }else
    {
        s+=(b/2);
        if(a%4)
            printf("%d",s+2+a/4);
        else
            printf("%d",s+1+a/4);
    }
    return 0;
}
