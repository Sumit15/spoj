#include <stdio.h>
inline void scanint(long long *x)
{
	register char c = getchar_unlocked();
	*x = 0;
	for(; (c<48)||(c>57);c = getchar_unlocked());
	for(; (c>47)&&(c<58);c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48);
}

inline void printint(long long n)
{
	if(n == 0)
	{
		putchar_unlocked('0');
		putchar_unlocked('\n');
	}
	else if(n == -1)
	{
		putchar_unlocked('-');
		putchar_unlocked('1');
		putchar_unlocked('\n');
	}
	else
	{
		char buf[11];
		buf[10] = '\n';
		int i = 9;
		while(n)
		{
			buf[i--] = n % 10 + '0';
			n /= 10;
		}
		while(buf[i] != '\n')
			putchar_unlocked(buf[++i]);
	}
}

int main()
{
    int n,q,l,r,k,i,j,p;
    long long int a,s[100005]={0},sum;
    scanint(&n);
    scanint(&q);
    for(i=1;i<=n;i++)
    {
        scanint(&a);
        s[i]=s[i-1]+a;
    }
    for(i=0;i<q;i++)
    {
        sum=0;
        scanint(&l);
        scanint(&r);
        scanint(&k);
        p=(r-l+1)/k;
        for(j=0;j<p;j++)
        {
            if(j&1)
                sum-=(s[l-1+(j+1)*k]-s[l-1+j*k]);
            else
                sum+=(s[l-1+(j+1)*k]-s[l-1+j*k]);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
