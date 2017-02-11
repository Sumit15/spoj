#include<iostream>
#include<map>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int t,p=0,q=0,x,z;
    //vector <int> v;
    //vector <int>::iterator pos;
    char s[10];
    map <int,int> m;
    map <int,int>::iterator it;
    cin>>t;
    while(t--)
    {
        //p=q=0;
        scanf("%*c%s%d",s,&x);
        //cin>>s>>x;
        if(s[0]=='i')
        {
            //v.push_back(x);
            z=(++m[x]);
            if(z==2)
                p++;
            else if(z==1)
                q++;
        }
        else
        {
            //pos=find(v.begin(),v.end(),x);
            //if(pos!=v.end()){
            //v.erase(pos);
            if(m[x]){
            z=(--m[x]);
            if(!z)
                q--;
            else if(z==1)
                p--;
            }
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
