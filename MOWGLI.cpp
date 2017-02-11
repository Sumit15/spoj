#include<iostream>
#include<cstdio>
#define mod 1000000007
using namespace std;

int main()
{
    int t,i,n,k,a[100],maxi;
    long long int b[100005];
    scanf("%d",&t);
    while(t--)
    {
        maxi=0;
        b[0]=b[1]=1;
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>maxi)
                maxi=a[i];
        }
        if(!k)
        {
            for(i=0;i<n;i++)
                printf("1\n");
            continue;
        }
        i=2;
        while(i<(maxi+2) && i<=k+1)
        {
            b[i]=(2*(b[i-1]%mod))%mod;
            i++;
        }
        while(i<(maxi+2))
        {
            b[i]=(((2*(b[i-1]%mod))%mod) + ((mod-b[i-k-1])%mod))%mod;
            i++;
        }
        for(i=0;i<n;i++)
            printf("%lld\n",b[a[i]+1]);
    }
}
