#include<stdio.h>
#include<math.h>

int main()
{
    int n,s=0,i,p;
    scanf("%d",&n);
    for(i=1;i<=sqrt(n);i++)
    {
        p=n/i;
        s+=(p-i+1);
    }
    printf("%d",s);
    return 0;
}

