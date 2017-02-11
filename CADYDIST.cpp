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
    long long int s,n,a[100000],b[100000],i;
    while(1)
    {
        s=0;
        scanf("%lld",&n);
        if(n==0)
            break;
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(i=0;i<n;i++)
            scanf("%lld",&b[i]);
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<n;i++)
            s+=a[i]*b[n-i-1];
        printf("%lld\n",s);
    }
    return 0;
}
