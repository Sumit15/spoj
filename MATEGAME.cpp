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
#define pri(x) printf("%d",x)
#define pii pair <ll,ll>
#define ll long long
using namespace std;

int main(){
	int t,a[51][51],n,m,i,j,ans,p;
	sci(t);
	while(t--){
		scii(n,m);
		fr(i,0,n)
			fr(j,0,m)
				sci(a[i][j]);
		ans=0;
		fr(i,0,n){
			p=0;
			for(j=m-1;j>=0;j--)
				a[i][j]<=p?p=a[i][j]-1:p=a[i][j];
			ans^=p;
		}
		ans?printf("FIRST\n"):printf("SECOND\n");
	}
}