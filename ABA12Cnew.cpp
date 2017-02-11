/* Sumit Singh
 * satan_nightmare/sumitnit/sumitsinghnit
 * MNNIT Allahabad
 */

#include <bits/stdc++.h>

#define fr(i,p,n) for(i=p;i<n;i++)
#define mp make_pair
#define pb push_back
#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scii(x,y) scanf("%d%d",&x,&y)
#define scll(x,y) scanf("%lld%lld",&x,&y)
#define pri(x) printf("%d",x)
#define pii pair <int,int>
#define ll long long
#define INF 100000000
using namespace std;
int dp[101][101][101],a[101],n,k;
int fun(int idx,int left,int w){
	if(idx==k || !left)
		return w?-1:0;
	if(!w)
		return 0;
	if(dp[idx][left][w]!=-1)
		return dp[idx][left][w];
	if(a[idx]==-1)
		return dp[idx][left][w]=fun(idx+1,left,w);
	int m=INF,i=0,x;
	while(i<=left && w-i*(idx+1)>=0){
		x=fun(idx+1,left-i,w-i*(idx+1));
		if(x!=-1)
			m=min(m,i*a[idx]+x);
		i++;
	}
	if(m!=INF)
		dp[idx][left][w]=m;
	return dp[idx][left][w];
}

int main(){
	int i,j,p,t;
	sci(t);
	while(t--){
		scii(n,k);
		fr(i,0,k)
			fr(j,0,n+1)
				fr(p,0,k+1)
					dp[i][j][p]=-1;
		fr(i,0,k)
			sci(a[i]);
		printf("%d\n",fun(0,n,k));
	}
	return 0;
}