#include<stdio.h>
#include<stdlib.h>

int a[101][101],dp[101][101],n,m;

int fare(int i,int j)
{
    int x,y,z;
    if(dp[i][j]!=0)
        return dp[i][j];
    if(j==n-1)
        return a[i][j];
    if(i==0)
    {
        x=a[i][j]+fare(i,j+1);
        y=a[i][j]+fare(i+1,j+1);
        if(x<y)
            dp[i][j]=x;
        else
            dp[i][j]=y;
        return dp[i][j];
    }
    if(i==m-1)
    {
        x=a[i][j]+fare(i,j+1);
        y=a[i][j]+fare(i-1,j+1);
        if(x<y)
            dp[i][j]=x;
        else
            dp[i][j]=y;
        return dp[i][j];
    }
    x=a[i][j]+fare(i-1,j+1);
    y=a[i][j]+fare(i,j+1);
    z=a[i][j]+fare(i+1,j+1);
    if(x<y)
    {
        if(x<z)
            dp[i][j]=x;
        else
            dp[i][j]=z;
    }else
    {
        if(y<z)
            dp[i][j]=y;
        else
            dp[i][j]=z;
    }
    return dp[i][j];
}

int main()
{
    int i,j,min,p;
    //printf("%d",dp[43][78]);
    scanf("%d%d",&n,&m);
    //memset(dp, -1, sizeof(dp));
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);
    min=fare(0,0);
    //printf("%d ",min);
    for(i=1;i<m;i++)
    {
        p=fare(i,0);
        //printf("%d ",p);
        if(min>p)
        min=p;
    }
    printf("%d",min);
    return 0;
}
