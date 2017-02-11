#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>

using namespace std;

int main()
{
    int t,a[1000002],i,n,j;
    cin>>t;
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=n-1;i>0;i--)
            if(a[i]>a[i-1])
            break;
        //cout<<i<<endl;
        if(i==0)
        {
            printf("-1\n");
            continue;
        }
        //swap(a[i],a[i-1]);
        sort(a+i,a+n);
        for(j=i;i<n;j++)
            if(a[j]>a[i-1])
            {
                swap(a[i-1],a[j]);
                break;
            }
        for(i=0;i<n;i++)
            printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}
