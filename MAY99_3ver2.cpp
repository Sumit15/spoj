#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long int x,y,z,p,t;
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
        if(z%x == 0)
        {
            printf("YES\n");
            continue;
        }
        if(p)
        {
            if(x%p)
            {
                printf("YES\n");
                continue;
            }else
            {
                if((z%x)%p == 0)
                {
                    printf("YES\n");
                    continue;
                }
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

