#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int a[2][100],n,dp[2][100];

int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int fun(int z,int m)
{
    if(dp[z][m]!=-1)
        return dp[z][m];
    if(m==n-1)
        return a[z][m];
    //x=a[z][m]+abs(a[1-z][m]-a[1][m+1])+fun(0,m+1);
    //y=a[z][m]+abs(a[1-z][m]-a[0][m+1])+fun(1,m+1);
    dp[z][m]=max(a[z][m]+abs(a[1-z][m]-a[1][m+1])+fun(0,m+1),a[z][m]+abs(a[1-z][m]-a[0][m+1])+fun(1,m+1));
    return dp[z][m];
}

int main()
{
    int i;
    scanf("%d",&n);
    memset(dp,-1,sizeof(dp));
    for(i=0;i<n;i++)
        scanf("%d%d",&a[0][i],&a[1][i]);
    printf("%d",max(fun(0,0),fun(1,0)));
    return 0;
}
