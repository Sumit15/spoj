#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,r,l,j,k;
    char s[205],a[200][200];
    while(1)
    {
        k=0;
        scanf("%d%*c",&n);
        if(n==0)
            break;
        gets(s);
        l=strlen(s);
        r=l/n;
        for(i=0;i<r;i++)
        {
            if(i%2==0)
                for(j=0;j<n;j++)
                a[i][j]=s[k++];
            else
                for(j=0;j<n;j++)
                a[i][n-j-1]=s[k++];
        }
        for(i=0;i<n;i++)
            for(j=0;j<r;j++)
            printf("%c",a[j][i]);
        printf("\n");
    }
    return 0;
}
