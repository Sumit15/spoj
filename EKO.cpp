#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int c,n;
long long int m;

int bsearch(long long int *a,long long int *s,int l,int h)
{
    int mid=(l+h)/2;
    if(l==h)
    {
        if(s[l+1]-a[l]*(n-l) > m)
            return l;
        else if(s[l+1]-a[l]*(n-l) == m)
        {
            c=1;
            return l;
        }
        else
            return l-1;
    }else
    {
        if(s[mid+1]-a[mid]*(n-mid) > m)
            return bsearch(a,s,mid,h);
        else if(s[mid+1]-a[mid]*(n-mid) == m)
        {
            c=1;
            return mid;
        }
        else
            return bsearch(a,s,l,mid);
    }
}

int main()
{
    int i;
    long long int x,j;
    scanf("%d%lld",&n,&m);
    long long int a[n+1],s[n+1];
    a[0]=0;
    for(i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    sort(a,a+n);
    for(i=n;i>0;i--)
        s[i]+=a[i];
    x=bsearch(a,s,0,n);
    if(c)
        printf("%lld",a[x]);
    else
    {
        for(j=a[x];j<a[x+1];j++)
        {
            if(s[x+1]-j*(n-x) < m)
                break;
        }
        printf("%lld",j-1);
    }
    return 0;
}
