#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,a[]={0,1,4,6,5,2};
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%d\n",a[n%6]);
    }
    return 0;
}
