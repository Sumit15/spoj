#include<stdio.h>
#include<string.h>
#include<math.h>

int power(int n)
{
    int s=1,i;
    for(i=0;i<n;i++)
        s*=10;
    return s;
}

int gcd(int a, int b)
{
    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
    int t,i,l,n,j;
    char s[20];
    scanf("%d",&t);
    while(t--)
    {
        n=0;
        scanf("%*c%s",&s);
        l=strlen(s);
        for(i=0;i<l;i++)
            if(s[i]=='.')
            break;
        if(i==l)
        {
            printf("1\n");
            continue;
        }
        for(j=l-1;j>i;j--)
            n+=(s[j]-'0')*power(l-1-j);
        l=l-1-i;
        j=power(l);
        //printf("%d %d %d ",l,n,j);
        printf("%d\n",j/gcd(j,n));
    }
    return 0;
}
