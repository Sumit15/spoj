#include<stdio.h>

long long int factorial(int n)
{
  int c;
  long long int result = 1;

  for (c = 1; c <= n; c++)
    result = result * c;

  return result;
}

int main()
{
    int i,n,k,x;
    long long int f;
    while(scanf("%d %d",&n,&k)!=EOF)
    {
        f=factorial(n);
        for(i=0;i<k;i++)
        {
            scanf("%d",&x);
            f/=factorial(x);
        }
        printf("%lld\n",f);
    }
    return 0;
}
