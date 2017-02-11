#include<iostream>
#include<map>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int t,p,q,x,z;
    vector <int> v;
    //vector <int>::iterator pos;
    char s[10];
    map <int,int> m,m2;
    map <int,int>::iterator it;
    scanf("%d",&t);
    while(t--)
    {
        p=q=0;
        scanf("%*c%s%d",s,&x);
        //cin>>s>>x;
        if(s[0]=='i')
        {
            v.push_back(x);
            z=(++m[x]);
            if(z==1)
                m2[x]=v.size();
        }
        else
        {
            //pos=find(v.begin(),v.end(),x);
            if(m2[x]>0){
            v.erase(v.begin()+m2[x]-1);
            m[x]--;
            /*if(m[x]<0)
                m[x]=0;*/
            }
        }
        for(it=m.begin();it!=m.end();it++)
        {
        	//cout<<it->first<<" "<<it->second<<endl;
            if(it->second>1)
            {
                p=1;
                q++;
            }else if(it->second>0)
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
