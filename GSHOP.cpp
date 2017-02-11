#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <cstring>
using namespace std;

int main()
{
    int i,t,a[103],n,k,pos,neg,zero;
    long long int s;
    scanf("%d",&t);
    while(t--)
    {
        pos=neg=zero=s=0;
        scanf("%d%d",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>0)
                pos++;
            if(a[i]<0)
                neg++;
        }
        sort(a,a+n);
        if(n!=pos+neg)
            zero=1;
        if(zero)
        {
            if(neg)
            {
                if(k<neg)
                    for(i=0;i<k;i++)
                    a[i]*=-1;
                else
                    for(i=0;i<neg;i++)
                    a[i]*=-1;
            }
        }else
        {
            if(neg)
            {
                if(k<=neg)
                    for(i=0;i<k;i++)
                    a[i]*=-1;
                else
                {
                    for(i=0;i<neg;i++)
                    a[i]*=-1;
                    if((k-neg)&1)
                    {
                        if(pos){
                        if(a[neg]>a[neg-1])
                            a[neg-1]*=-1;
                        else
                            a[neg]*=-1;
                        }
                        else{
                                if(neg>1){
                            if(a[neg-2]>a[neg-1])
                            a[neg-1]*=-1;
                        else
                            a[neg-2]*=-1;
                                }else
                                a[neg-1]*=-1;
                        }
                    }
                }
            }else
            {
                if(k&1)
                    a[neg]*=-1;
            }
        }
        for(i=0;i<n;i++)
            s+=a[i];
        printf("%lld\n",s);
    }
    return 0;
}
