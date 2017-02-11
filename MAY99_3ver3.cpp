#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    long int x,y,z,p,t,q;
    cin>>t;
    while(t--)
    {
        scanf("%ld%ld%ld",&x,&y,&z);
        if(x>y)
            swap(x,y);
        if(z>y)
        {
            printf("NO\n");
            continue;
        }
        if(x==z || y==z)
        {
            printf("YES\n");
            continue;
        }
        p=x-(y%x);
        if(p==x)
            p=0;
        /*if(z%x == 0)
        {
            printf("YES\n");
            continue;
        }*/
        if(p)
        {
            q=__gcd(p,x);
            if(z%q == 0)
            {
                printf("YES\n");
                continue;
            }
        }else
        {
            if(z%x==0)
            {
                printf("YES\n");
                continue;
            }
        }
        printf("NO\n");
    }
    return 0;
}

