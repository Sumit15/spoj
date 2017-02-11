#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main()
{
    int n,i,j,a[300],sum,m,l;
    string s;
    while(1)
    {
        sum=1;
        m=0;
        scanf("%d%*c",&n);
        if(!n)
            break;
        getline(cin,s);
        for(i=0;i<300;i++)
            a[i]=0;
        j=0;
        l=s.length();
        a[s[0]]=1;//a[s[1]]=1;
        for(i=0;j<l;i++)
        {
            if(j<i)
                j=i+1;
            while(sum<=n && j<l)
            {
                j++;
                if(!a[s[j]])
                    sum++;
                a[s[j]]++;
            }
            //printf("%d %d ",i,j);
            if(j-i>m)
                m=j-i;
            a[s[i]]--;
            //printf("%d\n",a[s[i]]);
            if(!a[s[i]])
                sum--;
            //i++;
        }
        printf("%d\n",m);
    }
}
