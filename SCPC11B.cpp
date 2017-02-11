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
    int n,m,i,a[1425];
    while(1)
    {
        m=0;
        scanf("%d",&n);
        if(n==0)
            break;
        if(n<8)
        {
            for(i=0;i<n;i++)
                scanf("%*d");
            printf("IMPOSSIBLE\n");
            continue;
        }
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        if(a[0])
        {
            printf("IMPOSSIBLE\n");
            continue;
        }
        for(i=1;i<n;i++)
            if(a[i]-a[i-1]>200)
            {
                m=1;
                break;
            }
        if(2*(1422-a[n-1])>200)
            m=1;
        if(m)
            printf("IMPOSSIBLE\n");
        else
            printf("POSSIBLE\n");
    }
    return 0;
}
