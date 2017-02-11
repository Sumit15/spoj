/* Sumit Singh
 * satan_nightmare/sumitnit/sumitsinghnit
 * MNNIT Allahabad
 */

#include <bits/stdc++.h>

#define fr(i,p,n) for(i=p;i<n;i++)
#define mp make_pair
#define pb push_back
#define sci(x) scanf("%d",&x)
#define sxl(x) scanf("%lld",&x)
#define scii(x,y) scanf("%d%d",&x,&y)
#define scll(x,y) scanf("%lld%lld",&x,&y)
#define pri(x) printf("%d",x)
#define pii pair <int,int>
using namespace std;

int dp[10001][10001],a[2][10002];

int fun(int idx,int x){
	if(idx==n)
		return 0;
	if(dp[idx][x])
		return dp[idx][x];
	int m=INT_MAX;
	if(x){
		if()
	}else
		return dp[idx][x]=a[1][idx]+fun(idx+1,x+1);
	if(x<n-idx  )
		m=min(m,dp[idx+1][x+1]);
	if(x)
		m=min(m,dp[idx+1][x-1]);
	return dp[idx][x]=m;
}

int main(){
	int
	sci(n);
	fr(i,0,n)
		scanf("%d%d",&a[0][i],&a[1][i]);
	pri(fun(0,0));
	return 0;
}