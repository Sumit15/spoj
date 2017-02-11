#include<stdio.h>

int main()
{
    int n,i,j,countp=0,a[11],b[11],p;
    scanf("%d",&n);
    for(i=0;i<11;i++)
        b[i]=1;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
    {
        countp=0;
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i] && b[j]>countp)
                countp=b[j];
        }
        b[i]=countp+1;
    }
    p=0;
    for(i=0;i<n;i++)
        if(b[i]>p)
        p=b[i];
    printf("%d",p);
    return  0;
}
