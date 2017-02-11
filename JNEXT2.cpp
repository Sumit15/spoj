#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int main()
{
    int t,a[1000002],i,n;
    cin>>t;
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        if(next_permutation(a,a+n))
        {
            for(i=0;i<n;i++)
                printf("%d",a[i]);
            printf("\n");
        }
        else
            printf("-1\n");
    }
    return 0;
}
