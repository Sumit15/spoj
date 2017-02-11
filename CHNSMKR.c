#include<stdio.h>

int main()
{
    int x,y,i,j;
    while(1)
    {
        scanf("%d%d",&x,&y);
        if(x==0 || y==0)
            break;
        if(20*x>y)
        {
            printf("Not Possible\n");
            continue;
        }
        if(25*x<=y)
        {
            printf("%d %d\n",y/25,y-(25*(y/25)));
            continue;
        }
        i=y/x;
        j=0;
        while((j+x)*i<=y)
            j++;
        j--;
        printf("%d %d",(x+j),y-i*(x+j));
    }
    return 0;
}
