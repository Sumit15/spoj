#include<cstdio>
#include<iostream>

using namespace std;
int a[1000001];

int main()
{
    int n,t,p,q,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=2;i<=n;i++)
            a[i]=0;
        a[0]=n-1;
        p=n;
        while(p>2)
        {
            q=1;
            for(i=2;i<p;i++)
            {
                if(!a[i])
                {
                    if(!(p%i))
                    {
                        a[i]=1;
                        a[0]--;
                    }
                    q=i;
                }
            }
            p=q;
        }
        printf("%d\n",a[0]);
    }
    return 0;
}
