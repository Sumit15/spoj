#include<stdio.h>
#include<math.h>

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
    int n,a,b,c;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        c=abs(a-b)/gcd(abs(a),abs(b));
        printf("%d\n",c);
    }
    return 0;
}
