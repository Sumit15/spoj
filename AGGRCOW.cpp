#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int
    cin>>t;
    while(t--)
    {
        scanf("%d%d",&n,&c);
        for(i=0;i<n;i++)
            scanf("%ld",&a[i]);
        sort(a,a+n);
        l=1;
        r=a[n-1]-a[0];
        while(l<r)
        {
            m=l+(r-l)/2;
            for(i=0;i<c;i++)
            {
                while(s<m && j<n)
                    s+=a[j++]-a[pre];

            }
        }
    }
    return 0;
}
