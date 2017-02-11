#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
    int t,s,a[100002],j,i,x,n,m;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        s=0;
        scanf("%d%d",&n,&m);
        for(i=0;i<=n;i++)
            a[i]=0;
        for(i=0;i<m;i++)
        {
            scanf("%d",&x);
            a[x-1]=a[x]=a[x+1]=1;
        }
        for(i=1;i<=n;i++)
            s+=a[i];
        printf("Case %d: %d\n",j,s);
    }
    return 0;
}

