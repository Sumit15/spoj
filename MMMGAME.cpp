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
	int t,i,x,n,a,p;
	sci(t);
	while(t--){
		a=p=0;
		sci(n);
		fr(i,0,n){
			sci(x);
			a^=x;
			if(x!=1)
				p=1;
		}
		if(!p)
			a=!a;
		if(a)
			printf("John\n");
		else
			printf("Brother\n");
	}
	return 0;
}