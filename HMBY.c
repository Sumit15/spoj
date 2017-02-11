#include<stdio.h>

int main()
{
    long long int a,b,c,d,e,w,s=0;
    scanf("%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&w);
    if(w&1)
    {
        printf("NO");
        return 0;
    }
    s=2*a+4*b+8*c+16*d+32*e;
    if(s>=w)
        printf("YES");
    else
        printf("NO");
    return 0;
}
