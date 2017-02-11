#include<cstdio>
#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    long long int n,c,m;
    while(cin>>n != EOF)
    {
        c=0;
        while(n>0)
        {
            string s=to_string(n);
            sort(s,s+strlen(s));
            m=stoi(s);
            n=n-m;
            c++;
        }
        cout<<c;
    }
    return 0;
}

