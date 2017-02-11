#include<stdio.h>

int main()
{
    int a,b,m;
    while(1)
    {
        scanf("%d%d",&a,&b);
        if(a==-1)
            break;
        if(b>a)
        {
            a=a+b;
            b=a-b;
            a=a-b;
        }
        if(b==0)
        {
            if(a==0)
                printf("0\n");
            else
                printf("%d\n",a);
            continue;
        }
        m=a/(b+1);
        if(a%(b+1))
            m++;
        printf("%d\n",m);
    }
    return 0;
}
