#include<iostream>
#include<cstdio>

using namespace std;

char a[1001][1001];
int vis[1001][1001],p,c;

void fun(int x,int y)
{
    if(a[x][y]=='N')
    {
        if(!vis[x-1][y])
        {
            vis[x-1][y]=p;
            fun(x-1,y);
        }else if(vis[x-1][y]==p)
            c++;
    }
    if(a[x][y]=='E')
    {
        if(!vis[x][y+1])
        {
            vis[x][y+1]=p;
            fun(x,y+1);
        }else if(vis[x][y+1]==p)
            c++;
    }
    if(a[x][y]=='S')
    {
        if(!vis[x+1][y])
        {
            vis[x+1][y]=p;
            fun(x+1,y);
        }else if(vis[x+1][y]==p)
            c++;
    }
    if(a[x][y]=='W')
    {
        if(!vis[x][y-1])
        {
            vis[x][y-1]=p;
            fun(x,y-1);
        }else if(vis[x][y-1]==p)
            c++;
    }
}

int main()
{
    int n,m,i,j;
    char y;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
    	do{
        scanf("%c",&y);
    	}while(y<'A' || y>'Z');
    	a[i][0]=y;
        for(j=1;j<m;j++)
        {
            scanf("%c",&a[i][j]);
            vis[i][j]=0;
        }
    }
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if(!vis[i][j])
            {
                //c++;
                p++;
                vis[i][j]=p;
                fun(i,j);
            }
    printf("%d",c);
    return 0;
}
