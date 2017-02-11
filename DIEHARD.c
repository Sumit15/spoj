#include<stdio.h>
#include<stdlib.h>

int a[1001][1001];

int time(h,ar)
{
    if(a[h][ar]!=-1)
        return a[h][ar];
    if(h<=0 || ar<=0)
        return 0;
    int x=2+time(h-17,ar+7),y=2+time(h-2,ar-8);
    if(x>y)
        return x;
    else
        return y;

}

int main()
{
    int h,ar,i,j,t;
    scanf("%d",&t);
    while(t--)
    {
        memset(a, -1, sizeof(a));
        //printf("%d",a[100][1000]);
        scanf("%d%d",&h,&ar);
        printf("%d\n",time(h,ar)+1);
    }
}

