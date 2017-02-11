/* Sumit Singh
 * satan_nightmare/sumitnit/sumitsinghnit
 * MNNIT Allahabad
 */

#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

int a[1001],b[1001];
long long dp[1001][1001];
string str;

long long fun(int idx,int x){
	if(idx==n)
		return 1;
	int &ans=dp[idx][x];
	if(ans!=-1)
		return;
	ans=0;
	if(str[i]=='('){
		if(b[idx+1]>=x+1)
			ans=(ans+fun(idx+1,x+1))%mod;
	}else{
		if(x)
			ans=(ans+fun(idx+1,x-1))%mod;
		if(b[idx+1]>=x)
			ans=(ans+fun(idx+1,x))%mod;
	}
	return ans;
}

int main(){
	int i,t;
	cin>>t;
	while(t--){
		cin>>str;
		for(i=str.length()-1;i>=0;i++){
			b[i]=b[i+1];
			if(str[i]==')')
				b[i]++;
		}
		printf("%lld",fun(0,0));
	}
	return 0;
}