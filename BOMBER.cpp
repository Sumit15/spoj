/* Sumit Singh
 * satan_nightmare/sumitnit/sumitsinghnit
 * 2nd yr CSE
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
#define pri(x) prllf("%d",x)
#define pii pair <ll,ll>
#define ll long long
using namespace std;

int main(){
	int t,n,m;
	sci(t);
	while(t--){
		scii(n,m);
		if(n==m && !(n&1))
			printf("2\n");
		else
			printf("1\n");
	}
	return 0;
}