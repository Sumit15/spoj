#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a[3],b[3],c[3],t,n,j,i;
    scanf("%d",&t);
    while(t--)
    {
        b[0]=b[1]=b[2]=c[0]=c[1]=c[2]=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d%d%d",&a[0],&a[1],&a[2]);
            b[0]=a[0]+min(c[1],c[2]);
            b[1]=a[1]+min(c[0],c[2]);
            b[2]=a[2]+min(c[1],c[0]);
            for(j=0;j<3;j++)
                c[j]=b[j];
            printf("%d %d %d\n",b[0],b[1],b[2]);
        }
        printf("%d\n",min(b[0],min(b[1],b[2])));
    }
    return 0;
}
