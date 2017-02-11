#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <cstring>
using namespace std;

int a[1000000];

long long int maxval(long long int n)
{
    long long int p;
    if(n<1000000)
    {
        if(a[n])
            return a[n];
        p=n/2+n/3+n/4;
        if(n<p)
            a[n]=maxval(n/2)+maxval(n/3)+maxval(n/4);
        else
            a[n]=n;
        return a[n];
    }else
    {
        p=n/2+n/3+n/4;
        if(n<p)
            return maxval(n/2)+maxval(n/3)+maxval(n/4);
        else
            return n;
    }


}

int main()
{
	long long int n;
	for(int i=0;i<1000000;i++)
        a[i]=maxval(i);
	while(cin>>n)
        cout<<maxval(n)<<endl;
    return 0;
}

