#include<iostream>
#include<cstdio>

using namespace std;

int bfs(int x,int y){
	vis[x][y]=1;
}

int main(){
	int
	cin>>t;
	while(t--){
		scanf("%d%d",&n,&m);
		for(i=0;i<n;i++)
			for(j=0;j<m;j++){
				scanf("%d",&a[i][j]);
				vis[i][j]=0;
			}
		for(i=0;i<n;i++)
			for(j=0;j<m;j++){
				s+=bfs(i,j);
			}

	}
	return 0;
}