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
#define INF 1000000001
using namespace std;

int a[100002],tree[400005];
void build(int node,int start,int end){
	if(start==end)
		tree[node]=a[start];
	else{
		int mid=(start+end)/2;
		build(node*2,start,mid);
		build(node*2+1,mid+1,end);
		tree[node]=min(tree[node*2],tree[node*2+1]);
	}
}

int query(int node,int start,int end,int l,int r){
	if(start>end || start>r || end<l)
		return INF;
	else if(start>=l && end<=r)
		return tree[node];
	int mid=(start+end)/2;
	return min(query(node*2,start,mid,l,r),query(node*2+1,mid+1,end,l,r));
}

int main(){
	int t,n,q,l,j,r,i;
	cin>>t;
	fr(j,1,t+1){
		sci(n);
		sci(q);
		fr(i,1,n+1)
			sci(a[i]);
		build(1,1,n);
		printf("Scenario #%d:\n",j);
		while(q--){
			sci(l);
			sci(r);
			printf("%d\n",query(1,1,n,l,r));
		}
	}
	return 0;
}