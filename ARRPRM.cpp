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
#define ll long long
#define INF -1000000001
using namespace std;

int dp[2005],s[2001],k,n,p[2001];
int fun(int idx){
	if(idx>=n+1)
		return 0;
	if(dp[idx]!=-1)
		return dp[idx];
	int i=0,m=fun(idx+1);
	while(i<k && idx+p[i]<=n+1)
		m=max(m,s[idx+p[i]-1]-s[idx-1]+fun(idx+p[i++]+1));
	return dp[idx]=m;
}
int main(){
	int t,i,q[2001]={0},j;
	sci(t);
	for(i=2;i*i<=2000;i++)
		if(!q[i])
			for(j=2*i;j<=2000;j+=i)
				q[j]=1;
	for(i=2;i<=2000;i++)
		if(!q[i])
			p[k++]=i;
	while(t--){
		sci(n);
		fr(i,1,n+1){
			dp[i]=-1;
			sci(s[i]);
			s[i]+=s[i-1];
		}
		printf("%d\n",fun(1));
	}
	return 0;
}