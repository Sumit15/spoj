#include<iostream>
#include<cstdio>

using namespace std;
int dp[1000][1000];
int a[1000];
int fun(int l,int r)
{
    int x,y;
    if(l>r)
        return 0;
    if(dp[l][r]>-100000)
        return dp[l][r];
    if(r-l==1)
        dp[l][r]=a[l]+a[r]-2*min(a[l],a[r]);
    if(a[l+1]>=a[r])
        x=a[l]-a[l+1]+fun(l+2,r);
    else
        x=a[l]-a[r]+fun(l+1,r-1);
    if(a[l]>=a[r-1])
        y=a[r]-a[l]+fun(l+1,r-1);
    else
        y=a[r]-a[r-1]+fun(l,r-2);
    dp[l][r]=max(x,y);
    return dp[l][r];
}

int main()
{
    int t=1,i,j,n;
    //cin>>t;
    while(1)
    {
        scanf("%d",&n);
        if(!n)
        break;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            dp[i][j]=-100000;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        printf("In game %d, the greedy strategy might lose by as many as %d points.\n",t++,fun(0,n-1));
    }
    return 0;
}
