#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;
long long int a[1000000],s[1000000];
int main()
{
    int n,i,l,r,mid;
    long long int ans,m;
    scanf("%d%lld",&n,&m);
    l=0;
    r=n-1;
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    sort(a,a+n);
    s[n-1]=0;
    for(i=1;i<n;i++)
        s[n-i-1]=s[n-i]+i*(a[n-i]-a[n-i-1]);
    //for(i=0;i<n;i++)
    //    printf("%lld ",s[i]);
    //printf("\n");
    while(r>l)
    {
        mid=(r-l+1)/2;
        mid+=l;
        if(s[mid]>=m)
            l=mid;
        else
            r=mid-1;
    }
    //printf("%d\n",l);
    ans=s[l];
    for(i=0;ans>=m;i++)
        ans-=n-l-1;
    ans+=n-l-1;
    printf("%d",a[l]+i-1);
    return 0;
}
