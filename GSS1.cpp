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

class pack{
public:
	int l,r,c,s;
	pack(int l,int r,int c,int s){
		this->l=l;
		this->r=r;
		this->c=c;
		this->s=s;
	}
};

int a[100002],L[400005],R[400005],C[400005],S[400005];
void build(int node,int start,int end){
	if(start==end){
		L[node]=a[start]; //max(0,a[start]);
		R[node]=a[start]; //max(0,a[start]);
		C[node]=a[start];
		S[node]=a[start];
	}
	else{
		int mid=(start+end)/2;
		build(node*2,start,mid);
		build(node*2+1,mid+1,end);
		/*if(L[node*2]==S[node*2])
			L[node]=L[node*2]+L[node*2+1];
		else*/
			L[node]=max(L[node*2],S[node*2]+L[node*2+1]);
		/*if(R[node*2+1]==S[node*2+1])
			R[node]=R[node*2]+R[node*2+1];
		else*/
			R[node]=max(R[node*2+1],S[node*2+1]+R[2*node]);
		C[node]=max(R[node*2]+L[node*2+1],max(C[node*2],C[node*2+1]));
		S[node]=S[node*2]+S[node*2+1];
		//tree[node]=min(tree[node*2],tree[node*2+1]);
	}
}

pack query(int node,int start,int end,int l,int r){
	if(start>end || start>r || end<l){
		pack p(INF,INF,INF,INF);
		return p;
	}
	else if(start>=l && end<=r){
		pack p(L[node],R[node],C[node],S[node]);
		return p;
	}
	int mid=(start+end)/2;
	pack p(0,0,0,0);
	pack p1=query(2*node,start,mid,l,r);
	pack p2=query(2*node+1,mid+1,end,l,r);
	/*if(L[node*2]==S[node*2])
		L[node]=L[node*2]+L[node*2+1];
	else*/
		p.l=max(p1.l,p1.s+p2.l);
	/*if(R[node*2+1]==S[node*2+1])
		R[node]=R[node*2]+R[node*2+1];
	else*/
		p.r=max(p2.r,p1.r+p2.s);
	p.c=max(p1.r+p2.l,max(p1.c,p2.c));
	p.s=p1.s+p2.s;
	return p;
}

int main(){
	int t,n,q,l,j,r,i;
	sci(n);
	fr(i,1,n+1)
		sci(a[i]);
	sci(t);
	while(t--){
		sci(l);
		sci(r);
		pack q=query(1,1,n,l,r);
		printf("%d\n",q.c);
	}
	return 0;
}