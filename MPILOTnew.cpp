#include <iostream>
#include <cstdio>
#include <climits>

using namespace std;

int dp[5001][5001],n,a[2][5001];

int fun(int m,int c,int idx){
	printf(" %d ",idx);
	if(idx==n){
		printf(" final ");
		return dp[idx][c]=0;
	}
	if( idx+1-c <= c ){
		if(dp[idx+1][c]==INT_MAX)
			dp[idx+1][c]=fun(m+a[1][idx],c,idx+1);
	}
	if( c+1 <= n/2 ){
		if(dp[idx+1][c+1]==INT_MAX)
			dp[idx+1][c+1]=fun(m+a[0][idx],c+1,idx+1);
	}
	dp[idx][c]=min(dp[idx+1][c],dp[idx+1][c+1]);
	return dp[idx][c];
}

int main(){
	int i,j;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
		for(j=0;j<=n;j++)
			dp[i][j]=INT_MAX;
	for(i=0;i<n;i++)
		scanf("%d%d",&a[0][n-1-i],&a[1][n-1-i]);
	printf("%d\n",fun(0,0,0));
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++)
			printf("%d ",dp[i][j]);
		printf("\n");
	}
	return 0;
}