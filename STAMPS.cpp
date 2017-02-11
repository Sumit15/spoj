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
    int t,n,i,j,a[1001];
    long long int x,m;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%d",&x,&n);
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        sort(a,a+n);
        m=0;
        for(j=0;j<n;j++)
        {
            m+=a[n-j-1];
            if(m>=x)
                break;
        }
        printf("Scenario #%d:\n",i);
        if(m>=x)
            printf("%d\n\n",j+1);
        else
            printf("impossible\n\n");
    }
    return 0;
}
