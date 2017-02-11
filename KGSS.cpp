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

int a[100002];
pii tree[400005];
void build(int node,int start,int end){
	if(start==end){
		tree[node].first=a[start];
		tree[node].second=-1;
	}
	else{
		int mid=(start+end)/2;
		build(node*2,start,mid);
		build(node*2+1,mid+1,end);
		tree[node].second=max(tree[node*2].first+tree[node*2+1].first,max(tree[node*2].second,tree[node*2+1].second));
		tree[node].first=max(tree[node*2].first,tree[node*2+1].first);
	}
}

void update(int node,int start,int end,int idx,int v){
	if(start>end || idx<start || idx>end)
		return;
	if(start==end){
		tree[node].first=v;
		return;
	}
	int mid=(start+end)/2;
	update(node*2,start,mid,idx,v);
	update(node*2+1,mid+1,end,idx,v);
	tree[node].second=max(tree[node*2].first+tree[node*2+1].first,max(tree[node*2].second,tree[node*2+1].second));
	tree[node].first=max(tree[node*2].first,tree[node*2+1].first);
}

pii query(int node,int start,int end,int l,int r){
	if(start>end || r<start || l>end)
		return mp(-1,-1);
	if(start>=l && end<=r)
		return tree[node];
	int mid=(start+end)/2,x,y;
	pii p1,p2;
	p1=query(node*2,start,mid,l,r);
	p2=query(node*2+1,mid+1,end,l,r);
	x=max(p1.first+p2.first,max(p1.second,p2.second));
	y=max(p1.first,p2.first);
	return mp(y,x);
}

int main(){
	int n,i,x,q;
	char c;
	pii p;
	sci(n);
	fr(i,1,n+1)
		sci(a[i]);
	build(1,1,n);
	sci(q);
	while(q--){
		scanf("%*c%c",&c);
		if(c=='U'){
			sci(i);
			sci(x);
			update(1,1,n,i,x);
		}else{
			sci(i);
			sci(x);
			p=query(1,1,n,i,x);
			printf("%d\n",p.second);
		}
	}
	return 0;
}