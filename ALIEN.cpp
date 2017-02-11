#include<cstdio>
#include<iostream>

using namespace std;

int a[100000];

int main()
{
    int t,n,m,i,j,maxi;
    long long int s,sum;
    scanf("%d",&t);
    while(t--)
    {
        j=s=maxi=0;
        scanf("%d%d",&n,&m);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            //if(s<=m && j){
            for(;j<n;j++)
            {
                s+=a[j];
                if(s>m)
                    break;
            }
            if((j-i)>=maxi)
            {
                maxi=j-i;
                if((j-i)==maxi)
                    sum=min(sum,s-a[j]);
                else
                    sum=s-a[j];
            }
            if(j!=n)
                s-=a[j];
            s-=a[i];
        }
        printf("%lld %d",sum,maxi);
    }
    return 0;
}
