#include<stdio.h>

int main()
{
    int n,m,i,a[100001];
    while(1)
    {
        scanf("%d",&n);
        m=0;
        if(!n)
            break;
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
            if(a[a[i]]!=i)
            {
                m=1;
                break;
            }
        if(m)
            printf("not ambiguous\n");
        else
            printf("ambiguous\n");
    }
    return 0;
}
