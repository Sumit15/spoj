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
using namespace std;

ll tree[400004],lazy[400004];

void update(int node,int start,int end,int l,int r,ll x){
	if(lazy[node]!=0){
		tree[node]+=((ll)end-start+1)*lazy[node];
		if(start!=end){
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(start>end || start>r || end<l)
		return;
	if(start>=l && end<=r){
		tree[node]+=((ll)end-start+1)*x;
		if(start!=end){
			lazy[2*node]+=x;
			lazy[2*node+1]+=x;
		}
		return;
	}
	int mid=(start+end)/2;
	update(2*node,start,mid,l,r,x);
	update(2*node+1,mid+1,end,l,r,x);
	tree[node]=tree[node*2]+tree[node*2+1];
}

ll query(int node,int start,int end,int l,int r){
	if(start>end || start>r || end<l)
		return 0;
	if(lazy[node]!=0){
		tree[node]+=((ll)end-start+1)*lazy[node];
		if(start!=end){
			lazy[2*node]+=lazy[node];
			lazy[2*node+1]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(start>=l && end<=r)
		return tree[node];
	int mid=(start+end)/2;
	ll p1,p2;
	p1=query(2*node,start,mid,l,r);
	p2=query(2*node+1,mid+1,end,l,r);
	return p1+p2;
}

int main(){
	int t,i,n,l,q,r,x;
	ll v;
	sci(t);
	while(t--){
		sci(n);
		sci(q);
		fr(i,0,4*n+4)
			tree[i]=lazy[i]=0;
		fr(i,0,q){
			sci(x);
			if(x){
				scanf("%d%d",&l,&r);
				printf("%lld\n",query(1,1,n,l,r));
				//printf("%lld\n",query(1,0,n-1,l-1,r-1));
			}else{
				scanf("%d%d%lld",&l,&r,&v);
				//update(1,0,n-1,l-1,r-1,v);
				update(1,1,n,l,r,v);
			}
		}
	}
	return 0;
}