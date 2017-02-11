#include<iostream>
#include<cstdio>

using namespace std;

int b[20],n;

long long int number(int *c,int k)
{
    if(!k)
        return 1;
    long long int s=0;
    int d[2*n],i;
    for(i=0;i<2*n;i++)
        d[i]=c[i];
    //a[b[k-1]]=1;
    for(i=b[k-1]+1;i<2*n;i++)
    {
        if(!d[i]){
            d[i]=1;
            s+=number(d,k-1);
            }
    }
    return s;
}

int main()
{
    int t,a[40]={0},i,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        for(i=0;i<k;i++)
        {
            scanf("%d",&b[i]);
            a[b[i]]=1;
        }
        printf("%lld\n",number(a,k));

    }
    return 0;
}
