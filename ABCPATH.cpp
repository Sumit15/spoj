#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

char a[52][52],b[52][52];

int gsearch(char c,int i,int j)
{
    if(b[i][j]>0)
        return b[i][j];
    int l[8],m=0,x,y,p;
    /*if(a[i-1][j-1]==c+1)
    {
        if(b[i-1][j-1])
            p=1+b[i-1][j-1];
        else
            p=1+gsearch(c+1,i-1,j-1);
        if(p>m)
            m=p;
    }*/
    for(x=-1;x<2;x++)
        for(y=-1;y<2;y++)
        {
            if(a[i+x][j+y]==c+1 && !(x==0 && y==0))
            {
                if(b[i+x][j+y])
                    p=1+b[i+x][j+y];
                else
                    p=1+gsearch(c+1,i+x,j+y);
                if(p>m)
                    m=p;
            }
        }
    b[i][j]=m;
    return m;
}

int main()
{
    int h,w,i,j,x,maxx=0;
    scanf("%d%d%*c",&h,&w);
    for(i=0;i<h;i++)
        for(j=0;j<w;j++)
            scanf("%c",&a[i][j]);
    j=0;
    for(i=0;i<=h+1;i++)
        a[i][j]='a';
    j=w+1;
    for(i=0;i<=h+1;i++)
        a[i][j]='a';
    i=0;
    for(j=0;j<=w+1;j++)
        a[i][j]='a';
    i=h+1;
    for(j=0;j<=w+1;j++)
        a[i][j]='a';
    for(i=1;i<=h;i++)
        for(j=1;j<=w;j++)
        {
            if(a[i][j]=='A')
            {
                //b[i][j]=1;
                x=gsearch('A',i,j);
                if(!x)
                    x=1;
                if(x>maxx)
                    maxx=x;
            }
        }
    printf("%d",maxx);
    return 0;
}
