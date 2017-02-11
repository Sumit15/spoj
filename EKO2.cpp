#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,i,mid,l=0,h;
    long long int m,a[1000002],s[1000002],p=0;
    scanf("%d%lld",&n,&m);
    for(i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    a[0]=0;
    sort(a,a+n+1);
    h=n;
    for(i=n;i>0;i--)
    {
        s[i]=p-(n-i)*a[i];
        p+=a[i];
    }
    while(l < h)
    {
      mid = l + (h-l+1)/2;
      if(s[mid]<m)
         h = mid-1;
      else
         l = mid;
    }
    printf("%d",l);
    return 0;
}
