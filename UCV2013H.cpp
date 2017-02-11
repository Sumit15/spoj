#include<iostream>
#include<cstdio>
#include<map>
#include<vector>
#include<queue>

using namespace std;

int a[252][252],vis[252][252],count;

void bfs(int x1,int y1)
{
    queue <pair <int,int> > q;
    pair <int,int> p2;
    int x,y;
    p2=make_pair(x1,y1);
    q.push(p2);
    vis[x1][y1]=1;
    while(!q.empty())
    {
        x=q.front().first;
        y=q.front().second;
        q.pop();
        if(!vis[x-1][y] && a[x-1][y])
        {
            p2=make_pair(x-1,y);
            vis[x-1][y]=1;
            q.push(p2);
            count++;
        }
        if(!vis[x][y+1] && a[x][y+1])
        {
            p2=make_pair(x,y+1);
            vis[x][y+1]=1;
            q.push(p2);
            count++;
        }
        if(!vis[x+1][y] && a[x+1][y])
        {
            p2=make_pair(x+1,y);
            vis[x+1][y]=1;
            q.push(p2);
            count++;
        }
        if(!vis[x][y-1] && a[x][y-1])
        {
            p2=make_pair(x,y-1);
            vis[x][y-1]=1;
            q.push(p2);
            count++;
        }
    }
}

int main()
{
    int i,n,m,j,c;
    map <int,int> :: iterator it;
    map <int,int> mp;
    while(true)
    {
        c=0;
        mp.clear();
        cin>>n>>m;
        if(!n)
            break;
        for(i=0;i<=n+1;i++)
            vis[i][0]=vis[i][m+1]=1;
        for(i=1;i<=m;i++)
            vis[0][i]=vis[n+1][i]=1;
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
            {
                scanf("%d",&a[i][j]);
                vis[i][j]=0;
            }
        for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
            {
                if(!vis[i][j] && a[i][j])
                {
                    c++;
                    count=1;
                    bfs(i,j);
                    mp[count]++;
                }
            }
        cout<<c<<endl;
        for(it=mp.begin();it!=mp.end();it++)
            printf("%d %d\n",it->first,it->second);
    }
    return 0;
}
