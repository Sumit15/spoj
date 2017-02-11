#include<stdio.h>

int main()
{
	int t,i,a[8],b[8],c[8],p,max=0;
	//scanf("%d",&t);
	while(1)
	{
		max=0;
		for(i=0;i<8;i++)
			scanf("%d",&a[i]);
		if(a[0]==-1)
		break;
		for(i=0;i<4;i++)
		{
			b[i]=a[i]/a[i+4];
			p=a[i]%a[i+4];
			if(p)
			c[i]=a[i+4]-p;
			else
			c[i]=0;
			if(b[i]>b[max])
			max=i;
		}
		if(b[max])
		{
			if(c[max]==0)
			max=b[max];
			else
			max=b[max]+1;
			for(i=0;i<4;i++)
				printf("%d ",a[i+4]*max-a[i]);
		}
		else
			for(i=0;i<4;i++)
				if(a[i+4])
				printf("%d ",a[i]-a[i+4]);
				else
				printf("0 ");
		printf("\n");
	}
	return 0;
}
