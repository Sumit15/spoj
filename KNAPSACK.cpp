#include<iostream>
#include<cstdio>

using namespace std;

int dp[2006],s,n,a[2][2006];

void fun(int c,int v,int idx){
	if(c>s || idx>=n)
		return;
	if(c+a[0][idx]<=s){
		if(dp[c+a[0][idx]]<v+a[1][idx]){
			dp[c+a[0][idx]]=v+a[1][idx];
			fun(c+a[0][idx],v+a[1][idx],idx+1);
		}
	}
	fun(c,v,idx+1);
}

int main(){
	int i,ans=0;
	scanf("%d%d",&s,&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&a[0][i],&a[1][i]);
	fun(0,0,0);
	for(i=1;i<=s;i++)
		ans=max(ans,dp[i]);
	printf("%d",ans);
	return 0;
}