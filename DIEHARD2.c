#include<stdio.h>

int a,h;

int fun1()
{
    int x,b;
    x=h/2;
    b=a/8;
    if(h%2==0)
        x--;
    if(a%8==0)
        b--;
    if(x<b)
    {
        h-=2*x;
        a-=8*x;
        return x;
    }else
    {
        h-=2*b;
        a-=8*b;
        return b;
    }
}

int fun2()
{
    if(h-17>0)
    {
        h-=17;
        a+=7;
        return 1;
    }else
    return 0;
}

int main()
{
    int t,s,p;
    scanf("%d",&t);
    while(t--)
    {
        s=0;
        scanf("%d%d",&h,&a);
        while(1)
        {
            p=fun1();
            s+=p;
            //if(!p)
            //    break;
            p=fun2();
            s+=p;
            if(!p)
                break;
        }
        printf("%d\n",1+2*s);
    }
    return 0;
}
