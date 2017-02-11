#include<iostream>
#include<cstdio>
#include<cmath>
#define lli long long int

lli pows(lli a,lli b)
{
    if(!b)
        return 1;
    lli x=pows(a,b/2);
    if(b&1)
        return x*x*a;
    else
        return x*x;
}

using namespace std;

int main()
{
    int n=10001,i,t,j,a[10005]={0},b[10005];
    long long int s[10005],p;
    for(i=2;i<n;i++){
    if(!a[i])
        for(j=i+1;j<=n;j++)
            if(!(j%i))
            a[j]=1;
    }
    for(i=1;i<=10001;i++)
        b[i]=1;
    for(i=2;i<=n;i++)
    {
        s[i]=1;
        for(j=2;j<=i;j++){
            if(b[j]*j<=i)
                b[j]*=j;
            s[i]=(s[i]*b[i])%1000000007;
        }
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%lld",s[n]);
    }
    return 0;
}
