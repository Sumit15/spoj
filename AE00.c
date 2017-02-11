#include<stdio.h>
#include<math.h>

int primeFactors(int n)
{
    int i=0,j,a[1000]={0},s=1;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        a[i]++;
        n = n/2;
    }
    if(a[i])
            i++;
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (j = 3; j <= n; j = j+2)
    {
        // While i divides n, print i and divide n
        while (n%j == 0)
        {
            a[i]++;
            n = n/j;
        }
        if(a[i])
            i++;
    }

    // This condition is to handle the case whien n is a prime number
    // greater than 2
    //if (n > 2)
    //    return 1;
    //printf("%d\n",i);
    for(j=0;j<i;j++){
        s*=(a[j]+1);
        //printf("%d ",a[j]);
    }
    if(s%2)
        return s/2+1;
    else
        return s/2;
}

int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s+=primeFactors(i);
    printf("%d",s);
    return 0;
}

