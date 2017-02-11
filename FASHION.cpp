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
    int t,i,a[1002],b[1002],n;
    long long int s;
    scanf("%d",&t);
    while(t--)
    {
        s=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<n;i++)
            s+=a[i]*b[i];
        printf("%lld\n",s);
    }
    return 0;
}

