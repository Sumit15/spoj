/* Sumit Singh
 * satan_nightmare/sumitnit/sumitsinghnit
 * MNNIT Allahabad
 */

#include <bits/stdc++.h>

#define fr(i,p,n) for(i=p;i<n;i++)
#define mp make_pair
#define sci(x) scanf("%d",&x)
#define sxl(x) scanf("%lld",&x)
#define scii(x,y) scanf("%d%d",&x,&y)
#define scll(x,y) scanf("%lld%lld",&x,&y)
#define pri(x) printf("%d",x)
#define ll long long
using namespace std;

ll fun(int idx,ll mask){
	if(idx==n)
		return 1;
	ll &ans=dp[idx][mask];
	if(ans!=-1)
		return ans;
	ans=0;
	fr(i,0,n){
		if(a[i][idx] && mask&(1<<i))
			ans+=fun(idx+1,mask|(1<<i));
	}
	return ans;
}

int main(){
	int
	cin>>t;
	while(t--){
		sci(n);
		fr(i,0,n)
			fr(j,0,n)
				sci(a[i][j]);
		
	}
	return 0;
}