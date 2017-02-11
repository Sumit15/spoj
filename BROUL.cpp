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
	long long int i,b,f,p;
    while(1)
    {
    	scanf("%lld %lld %lld",&i,&b,&f);
    	if(i==0)
    	break;
    	if((f-i)%b)
    		printf("No accounting tablet\n");
    	else
    	{
    		p=(abs(f-i))/b;
    		printf("%lld\n",(long long int)ceil((float)p/(float)3));
    	}
    }
    return 0;
}

