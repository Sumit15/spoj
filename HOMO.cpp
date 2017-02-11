#include<iostream>
#include<map>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int t,p,q,k;
    long x;
    vector <long> v;
    vector <long>::iterator pos;
    string s;
    map <long,int> m;
    map <long,int>::iterator it;
    cin>>t;
    while(t--)
    {
        p=q=0;
        scanf("%*c");
        cin>>s>>x;
        if(s[0]=='i')
        {
            v.push_back(x);
            m[x]++;
        }
        else
        {
            pos=find(v.begin(),v.end(),x);
            v.erase(pos);
            m[x]--;
            if(m[x]<0)
                m[x]=0;
        }
        //if(k<0)
        //    k=0;
        for(it=m.begin();it!=m.end();it++)
        {
            if(it->second>1)
                p=1;
            if(it->second>0)
                q++;
        }
        if(p && q>1)
            printf("both\n");
        else if(p)
            printf("homo\n");
        else if(q>1)
            printf("hetero\n");
        else
            printf("neither\n");
    }
    return 0;
}
