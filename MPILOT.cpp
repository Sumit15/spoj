#include <iostream>
#include <cstdio>
#include <climits>
 
using namespace std;
 
int dp[10002][10002],n,a[2][10001];
 
int fun(int c,int idx){
	if(idx==n){
		return dp[idx][c]=0;
	}
	if( idx+1-c <= c ){
		if(dp[idx+1][c]==INT_MAX)
			dp[idx+1][c]=fun(c,idx+1);
	}
	if( c+1 <= n/2 ){
		if(dp[idx+1][c+1]==INT_MAX)
			dp[idx+1][c+1]=fun(c+1,idx+1);
	}
	if(dp[idx+1][c]==INT_MAX)
		dp[idx][c]=dp[idx+1][c+1]+a[0][idx];
	else if(dp[idx+1][c+1]==INT_MAX)
		dp[idx][c]=dp[idx+1][c]+a[1][idx];
	else
		dp[idx][c]=min(dp[idx+1][c]+a[1][idx],dp[idx+1][c+1]+a[0][idx]);
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
	printf("%d\n",fun(0,0));
	/*for(i=0;i<=n;i++){
		for(j=0;j<=n;j++)
			printf("%d ",dp[i][j]);
		printf("\n");
	}*/
	return 0;
} 