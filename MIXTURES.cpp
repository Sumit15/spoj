/* Sumit Singh
 * satan_nightmare/sumitnit/sumitsinghnit
 * MNNIT Allahabad
 */

#include<bits/stdc++.h>

using namespace std;

int dp[102][102][2],a[101];

void fun(int i,int j){
	if(i==j){
		dp[i][i][0]=a[i]%100;
		dp[i][i][1]=0;
		return;
	}
	int &ans=dp[i][j][1];
	if(ans!=-1)
		return;
	int m=i,s,k,maxi=100000000;
	for(k=i;k<j;k++){
		fun(i,k);
		fun(k+1,j);
		s=dp[i][k][0]*dp[k+1][j][0]+dp[i][k][1]+dp[k+1][j][1];
		if(s<maxi){
			maxi=s;
			m=k;
		}
	}
	dp[i][j][0]=(dp[i][m][0]+dp[k+1][m][0])%100;
	dp[i][j][1]=maxi;
	//printf("%d %d %d %d\n",i,j,m,maxi);
}

int main(){
	int n,i,j;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				dp[i][j][1]=-1;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		fun(0,n-1);
		printf("%d\n",dp[0][n-1][1]);
	}
	return 0;
}