#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    int i,j,t,q;
    long long int n,p,sum,x;
    string s;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        s="";
        p=5;
        scanf("%lld",&n);
        for(i=1;;i++)
        {
            if((n-sum)<=p)
                break;
            sum+=p;
            p=p*5;
        }
        //cout<<sum<<" "<<i;
        p=p/5;
        n-=(sum+1);
        //cout<<" "<<n<<" "<<p<<endl;
        x=5;
        for(j=0;j<i;j++)
            {
                q=n%x;
                if(q==0)
                    s="m"+s;
                else if(q==1)
                    s="a"+s;
                else if(q==2)
                    s="n"+s;
                else if(q==3)
                    s="k"+s;
                else
                    s="u"+s;
                n/=5;
            }
        /*if(n>p)
        {
            n=2*p-n-1;
            for(j=0;j<i;j++)
            {
                q=n%x;
                if(q==0)
                    s="m"+s;
                else if(q==1)
                    s="a"+s;
                else if(q==2)
                    s="n"+s;
                else if(q==3)
                    s="k"+s;
                else
                    s="u"+s;
                x=x*5;
            }
        }else
        {
            //n--;
            for(j=0;j<i;j++)
            {
                q=n%x;
                if(q==0)
                    s="u"+s;
                else if(q==1)
                    s="k"+s;
                else if(q==2)
                    s="n"+s;
                else if(q==3)
                    s="a"+s;
                else
                    s="m"+s;
                x=x*5;
            }
        }*/

        cout<<s<<endl;
    }
    return 0;
}

