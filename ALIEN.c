#include<stdio.h>

int main()
{
	long int max=0,s=0,m;
	int n,i,j=0,t,a[100005];
	scanf("%d",&t);
	while(t--){
	scanf("%d %ld",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
		if(s<m+1)
		{
			s+=a[i];
			j=i;
		}
	}
	//printf("%ld\n",s);
	s-=a[j];
	max=s;
	//printf("%ld\n",s);
	for(i=1;i<n && j<n;i++)
	{

		s-=a[i-1];
		for(;s<m+1 && j<n;j++)
		{
			s+=a[j];
		}

		s-=a[--j];
		//printf("%ld\n",s);
		if(s>max)
		max=s;

	}
	//printf("\n");
	printf("%ld\n",max);
    }
	return 0;
}

