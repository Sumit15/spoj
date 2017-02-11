#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,t,t1,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&t1,&c);
        printf("Scenario #%d: %.2lf\n",i+1,(double)t1*(log((double)c/a)/log((double)b/a)));

    }
    return 0;
}
