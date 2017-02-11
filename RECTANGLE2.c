#include<stdio.h>
#include<math.h>

int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    int n,x,y,xn,yn,xt,yt,hx,hy,i;
    scanf("%d",&n);
    scanf("%d %d",&x,&y);
    hx=y;
    hy=x;
    for(i=0;i<n-1;i++)
    {
        scanf("%d %d",&xn,&yn);
        xt=x;
        yt=y;
        x=max(xn+abs(yn-hx)+xt,xn+abs(yn-hy)+yt);
        y=max(yn+abs(xn-hx)+xt,yn+abs(xn-hy)+yt);
        hx=yn;
        hy=xn;
    }
    printf("%d",max(x,y));
    return 0;
}
