#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int
    scanf("%d",&t);
    while(t--)
    {
        m=0;
        scanf("%d%d",&n,&k);
        for(i=0;i<2*n;i++)
            a[i]=0;
        for(i=0;i<k;i++)
        {
            scanf("%d",&x);
            b[i]=x-1;
        }
        for(i=k-1;i>=0;i--)
        {
            for(j=b[i];j<2*n;j++)
            {
                if(!a[j])
                {
                    a[j]=1;
                    break;
                }
                a[j]=1;
            }
            if(j==2*n)
            {
                m=1;
                break;
            }
        }
        if(m)
    }
    return 0;
}
