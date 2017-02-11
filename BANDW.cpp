#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    string s1,s2;
    int c,i,a[501];
    while(1)
    {
        cin>>s1>>s2;
        if(s1[0]=='*')
            break;
        c=0;
        for(i=0;i<s1.length();i++)
            a[i]=0;
        for(i=0;i<s1.length();i++)
        {
            if(s1[i]==s2[i])
                a[i]=1;
        }
        if(!a[0])
            c++;
        for(i=1;i<s1.length();i++)
            if(!a[i] && a[i-1])
                c++;
        cout<<c<<endl;
    }
    return 0;
}
