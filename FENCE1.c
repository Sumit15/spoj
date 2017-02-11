#include<stdio.h>

int main()
{
    int l;
    double a;
    while(1)
    {
        scanf("%d",&l);
        if(!l)
            break;
        a=(double)(l*l)/6.2831852;
        printf("%.2lf\n",a);
    }
    return 0;
}
