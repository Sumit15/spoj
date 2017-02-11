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
        p=y%x;
        p=x-p;
        if(z%x == 0 || z==y || z==p || z==x)
        {
            printf("YES\n");
            continue;
        }
        if(z-p > 0)
        {
            z-=p;
            y-=p;
            if(y>z && z%x==0){
                printf("YES\n");
                continue;}
        }
        printf("NO\n");
    }
    return 0;
}
