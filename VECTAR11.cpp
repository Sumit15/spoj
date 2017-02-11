#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i,n,t,j,a[1000002],m;
    a[0]=0;
    a[1]=1;
    for(i=2;i<=1000000;i++)
    {
        m=1;
        for(j=1;j*j<=i;j++)
            if(a[i-j*j]==0)
            {
                a[i]=1;
                m=0;
                break;
            }
        if(m)
        a[i]=0;
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(a[n])
            printf("Win\n");
        else
            printf("Lose\n");
    }
    return 0;
}
