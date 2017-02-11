#include<iostream>
#include<cstdio>
#include<queue>

using namespace std;

int main(){
	int i,ans=0,dp[2006],s,n,a[2][2006],c,v,idx;
	queue < pair< pair<int,int>,int> > q;
	pair< pair<int,int>,int> temp;
	scanf("%d%d",&s,&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&a[0][i],&a[1][i]);
	q.push(make_pair(make_pair(0,0),0));
	while(!q.empty()){
		temp=q.front();
		c=temp.first.first;
		v=temp.first.second;
		idx=temp.second;
		q.pop();
		if(temp.second>=n)
			continue;
		q.push(make_pair(make_pair(c,v),idx+1));
		if(c+a[0][idx]<=s){
			if(dp[c+a[0][idx]]<v+a[1][idx]){
				dp[c+a[0][idx]]=v+a[1][idx];
				q.push(make_pair(make_pair(c+a[0][idx],v+a[1][idx]),idx+1));
			}
		}
	}
	for(i=1;i<=s;i++)
		ans=max(ans,dp[i]);
	printf("%d",ans);
	return 0;
}