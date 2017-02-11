#include<iostream>
#include<cstdio>
#define mod 1000000007
using namespace std;
int main()
{
    int t,n,a[100005],k,i,j,m;
    long long s,dp[100005];
    scanf("%d",&t);
    while(t--)
    {
        m=0;
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>m)
                m=a[i];
        }
        dp[0]=1;
        for(i=1;i<=k && i<=m;i++)
            dp[i]=(2*dp[i-1])%mod;
        for(i=k+1;i<=m;i++)
        {
            s=0;
            for(j=1;j<=k+1;j++)
                s=(s+dp[i-j])%mod;
            dp[i]=s;
        }
        /*for(i=0;i<=m;i++)
            cout<<i<<" : "<<dp[i]<<endl;*/
        for(i=0;i<n;i++)
            printf("%lld\n",dp[a[i]]);
    }
    return 0;
}

