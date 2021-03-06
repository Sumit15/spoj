#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
int main()
{
    int t,i,j,y1,y2,ans,x,y,vis[12][12],dis[12][12];
    pair <int,int> start,finish,p2;
    char c1,c2;
    queue < pair <int,int> > q;
    scanf("%d",&t);
    for(i=0;i<12;i++)
        vis[i][0]=vis[i][1]=vis[i][10]=vis[i][11]=1;
    for(i=2;i<10;i++)
        vis[0][i]=vis[1][i]=vis[10][i]=vis[11][i]=1;
    while(t--)
    {
        while(!q.empty()) q.pop();
        for(i=2;i<10;i++)
            for(j=2;j<10;j++)
            vis[i][j]=0;
        scanf("%*c%c%d%*c%c%d",&c1,&y1,&c2,&y2);
        start=make_pair(c1-'a'+2,y1+1);
        finish=make_pair(c2-'a'+2,y2+1);
        //printf("%d %d  %d %d\n",c1-'a'+2,y1+1,c2-'a'+2,y2+1);
        if(start==finish)
        {
            printf("0\n");
            continue;
        }
        dis[start.first][start.second]=0;
        q.push(start);
        vis[start.first][start.second]=1;
        while(!q.empty())
        {
            x=q.front().first;
            y=q.front().second;
            q.pop();
            if(!vis[x-2][y+1])
            {
                p2=make_pair(x-2,y+1);
                vis[x-2][y+1]=1;
                q.push(p2);
                dis[x-2][y+1]=dis[x][y]+1;
                if(p2==finish)
                {
                    ans=dis[x-2][y+1];
                    break;
                }
            }
            if(!vis[x-2][y-1])
            {
                p2=make_pair(x-2,y-1);
                vis[x-2][y-1]=1;
                q.push(p2);
                dis[x-2][y-1]=dis[x][y]+1;
                if(p2==finish)
                {
                    ans=dis[x-2][y-1];
                    break;
                }
            }
            if(!vis[x+2][y+1])
            {
                p2=make_pair(x+2,y+1);
                vis[x+2][y+1]=1;
                q.push(p2);
                dis[x+2][y+1]=dis[x][y]+1;
                if(p2==finish)
                {
                    ans=dis[x+2][y+1];
                    break;
                }
            }
            if(!vis[x+2][y-1])
            {
                p2=make_pair(x+2,y-1);
                vis[x+2][y-1]=1;
                q.push(p2);
                dis[x+2][y-1]=dis[x][y]+1;
                if(p2==finish)
                {
                    ans=dis[x+2][y-1];
                    break;
                }
            }
            if(!vis[x-1][y+2])
            {
                p2=make_pair(x-1,y+2);
                vis[x-1][y+2]=1;
                q.push(p2);
                dis[x-1][y+2]=dis[x][y]+1;
                if(p2==finish)
                {
                    ans=dis[x-1][y+2];
                    break;
                }
            }
            if(!vis[x+1][y-2])
            {
                p2=make_pair(x+1,y-2);
                vis[x+1][y-2]=1;
                q.push(p2);
                dis[x+1][y-2]=dis[x][y]+1;
                if(p2==finish)
                {
                    ans=dis[x+1][y-2];
                    break;
                }
            }
            if(!vis[x+1][y+2])
            {
                p2=make_pair(x+1,y+2);
                vis[x+1][y+2]=1;
                q.push(p2);
                dis[x+1][y+2]=dis[x][y]+1;
                if(p2==finish)
                {
                    ans=dis[x+1][y+2];
                    break;
                }
            }
            if(!vis[x-1][y-2])
            {
                p2=make_pair(x-1,y-2);
                vis[x-1][y-2]=1;
                q.push(p2);
                dis[x-1][y-2]=dis[x][y]+1;
                if(p2==finish)
                {
                    ans=dis[x-1][y-2];
                    break;
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
