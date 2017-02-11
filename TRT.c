#include<stdio.h>

int a[2001],dp[2000][2000],n;

int max(int i,int j)
{
    if(i>j)
        return i;
    else
        return j;
}

int price(int i,int j)
{
    if(i==j)
        return a[i]*n;
    if(dp[i][j])
        return dp[i][j];
    dp[i][j]=max(a[i]*(n-j+i)+price(i+1,j),a[j]*(n-j+i)+price(i,j-1));
    return dp[i][j];
}

int main()
{
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%d",price(0,n-1));
}
