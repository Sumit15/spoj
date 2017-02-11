#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>

using namespace std;

int dis,vis[10002];
vector<int> v[10002];

int bfs(int x){
	queue <int> q;
	vis[x]=1;
	q.push(x);
	int node=x,i;
	while(!q.empty()){
		x=q.front();
		q.pop();
		for(i=0;i<v[x].size();i++){
			if(!vis[v[x][i]]){
				q.push(v[x][i]);
				vis[v[x][i]]=1;
				node=v[x][i];
			}
		}
		dis++;
	}
	return node;
}

int main(){
	int n,i,x,y;
	cin>>n;
	for(i=1;i<n;i++){
		scanf("%d%d",&x,&y);
		v[x].push_back(y);
		v[y].push_back(x);
	}
	x=bfs(1);
	dis=0;
	for(i=1;i<=n;i++)
		vis[i]=0;
	bfs(x);
	printf("%d",dis);
	return 0;
}