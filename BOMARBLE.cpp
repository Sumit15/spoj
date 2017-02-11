#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int n,s;
    while(true)
    {
        scanf("%d",&n);
        if(!n)
            break;
        s=5*(n*(n+1)/2)+1-n*n;
        printf("%d\n",s);
    }
    return 0;
}
