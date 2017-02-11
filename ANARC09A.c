#include<stdio.h>
#include<string.h>

int main()
{
	int p=1,a,b,x,i;
	char s[2005];
	while(1)
	{
		a=b=0;
		scanf("%s",s);
		if(s[0]=='-')
		break;
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]=='{')
				a++;
			else
			{
				if(a)
					a--;
				else
					b++;
			}
			
		}
		if(b%2==1)
			x=(b/2)+2+((a-(b%2))/2);
		else
			x=(b/2)+((a)/2);
		printf("%d. %d\n",p++,x);
	}
	return 0;
}
