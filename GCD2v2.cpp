#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int power(int a,int b,int c)
{
    if(b==0)
        return 1;
    int x=power(a,b/2,c)%c;
    if(b&1)
        return ((x%c)*(x%c)*(a%c))%c;
    else
        return ((x%c)*(x%c))%c;
}

int main()
{
    int t,a,x,y,l,i,s;
    char c;
    string str,b;
    cin>>t;
    while(t--)
    {
        s=0;
        cin>>a>>c>>b;
        if(!a)
        {
            cout<<b<<endl;
            continue;
        }
        if(b[0]=='0')
        {
            printf("%d\n",a);
            continue;
        }
        l=b.length();
        while(l-i > 6)
        {
            str=b.substr(i,6);
            x=stoi(str);
            y=power(10,l-i-6,a);
            s=(s+((x%a)*(y%a))%a)%a;
            i+=6;
        }
        str=b.substr(i);
        x=stoi(str);
        s=(s+x)%a;
        printf("%d\n",__gcd(a,s));
    }
    return 0;
}

