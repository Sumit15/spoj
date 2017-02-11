#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int t,zero,one,n,a[101],pos,neg,s,i;
    cin>>t;
    while(t--)
    {
    	s=one=zero=pos=neg=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>0)
                pos++;
            else if(a[i]<0)
                neg++;
            if(a[i]==1)
                one=1;
        }
        if(n!=(pos+neg))
            zero=1;
        sort(a,a+n);
        if(pos&1)
        {
            for(i=neg+zero+1;i<n-1;i=i+2)
                s+=a[i]*a[i+1];
            s+=a[neg+zero];
        }else
        {
            if(one)
            {
                s=s+a[neg+zero]+a[neg+zero+1];
                i=neg+zero+2;
            }else
                i=neg+zero;
            for(;i<n-1;i=i+2)
                s+=a[i]*a[i+1];
        }
        if(neg&1)
        {
            for(i=0;i<neg-1;i=i+2)
                s+=a[i]*a[i+1];
            if(!zero)
                s+=a[neg-1];
        }
        else
            for(i=0;i<neg-1;i=i+2)
                s+=a[i]*a[i+1];
        printf("%d\n",s);
    }
    return 0;
}
