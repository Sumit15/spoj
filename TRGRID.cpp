#include<iostream>
#include<cstdio>

using namespace std;
int main()
{
    int t;
    long long int n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
        if(n<=m)
        {
            if(n&1)
                printf("R\n");
            else
                printf("L\n");
        }else
        {
            if(m&1)
                printf("D\n");
            else
                printf("U\n");
        }
    }
    return 0;
}
