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
    int ng,nm,g[100000],m[100000],t,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&ng,&nm);
		for(i=0;i<ng;i++)
			scanf("%d",&g[i]);
		for(i=0;i<nm;i++)
			scanf("%d",&m[i]);
		i=j=0;
		sort(g,g+ng);
		sort(m,m+nm);
		while(1)
		{
			if(g[i]<m[j])
			i++;
			else
			j++;
			if(i==ng)
			{
				printf("MechaGodzilla\n");
				break;
			}
			if(j==nm)
			{
				printf("Godzilla\n");
				break;
			}
		}
	}
    return 0;
}

