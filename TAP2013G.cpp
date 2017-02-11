#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,j=0;
    long long int a[100000],b[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    for(i=0;i<n;i++)
        scanf("%lld",&b[i]);
    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<n && j<n;i++)
    {
        for(;j<n;j++)
            if(b[j]>a[i])
                break;
        j++;
    }
    printf("%d %d",i,j);
    return 0;
}
