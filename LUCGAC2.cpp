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
    int i,a[6],m,n,count1=1,count2=1;
    long long int s;
    for(i=0;i<6;i++)
        scanf("%d",&a[i]);
    sort(a,a+6);
    for(i=1;i<6;i++)
        if(a[i]==a[0])
        count1++;
    for(i=4;i>=0;i--)
        if(a[i]==a[5])
        count2++;
    if(count1==3 || count1==6)
    {
        m=a[0];
        n=a[5];
        s=3*m*m+3*n*n-2*(m-n)*(m-n);
        printf("%lld",s);
        return 0;
    }
    if(count1==4 || count2==4)
    {
        if(count1==4)
            s=6*a[0]*a[0]+4*(a[5]-a[0])*a[0];
        else
            s=6*a[5]*a[5]+4*(a[0]-a[5])*a[5];
        printf("%lld",s);
        return 0;
    }
    s=6*a[2]*a[2]-4*(a[2]-a[0])*a[2]+2*(a[0]+a[2])*(a[4]-a[2]);
    printf("%lld",s);
    return 0;
}
