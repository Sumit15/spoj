#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    int i,j,t;
    long long int n,p,sum,x;
    string s;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        s="";
        p=2;
        scanf("%lld",&n);
        for(i=1;;i++)
        {
            if((n-sum)<=p)
                break;
            sum+=p;
            p=p<<1;
        }
        //cout<<sum<<" "<<i;
        p=p>>1;
        n-=(sum+1);
        //cout<<" "<<n<<endl;
        x=1;
        if(n>p)
        {
            n=2*p-n-1;
            for(j=0;j<i;j++)
            {
                if(x&n)
                    s="5"+s;
                else
                    s="6"+s;
                x=x<<1;
            }
        }else
        {
            //n--;
            for(j=0;j<i;j++)
            {
                if(x&n)
                    s="6"+s;
                else
                    s="5"+s;
                x=x<<1;
            }
        }

        cout<<s<<endl;
    }
    return 0;
}
