#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main() {
	int t,n,ip,i,p;
    float maxi,fp,a[1005];
    scanf("%d",&t);
    while(t--)
    {
        maxi=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%*c%*s%f",&a[i]);
        sort(a,a+n);
        for(i=1;i<n;i++)
            if(a[i]-a[i-1]>maxi)
            maxi=a[i]-a[i-1];
        if(maxi<360+a[0]-a[n-1])
            maxi=360+a[0]-a[n-1];
        printf("%f ",maxi);
        maxi=4320*((360-maxi)/360);
        p=maxi;
        if(maxi-p>0)
            p++;
        //if(fp>0)
        //    ip++;
        printf("%d\n",p);
    }
    return 0;
}
