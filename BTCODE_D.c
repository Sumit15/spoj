#include<stdio.h>

int main()
{
	int t,a[101][101],i,j,m,n,x;
	long long int max,sum,p;
	scanf("%d",&t);
	while(t--)
	{
		max=0;
		scanf("%d %d",&m,&n);
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				scanf("%d",&x);
				if(x<a[i][j])
				a[i][j]=x;
			}
		for(i=0;i<m;i++)
		{
			max=0;
			for(j=0;j<n;j++)
			{
				scanf("%lld",&p);
				if(p*a[i][j]>max)
				max=p*a[i][j];
			}
			sum+=max;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
