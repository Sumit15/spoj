#include<stdio.h>

int main()
{
    int t;
    long long int a,b;
    char c1,c2;
    scanf("%d",&t);
    while(t--)
    {
        a=0,c1='+';
        do
        {
            c2=' ';
            scanf("%lld",&b);
            while(c2==' ')
                scanf("%c",&c2);
            if(c1=='+')
                a+=b;
            if(c1=='-')
                a-=b;
            if(c1=='*')
                a*=b;
            if(c1=='/')
                a/=b;
            c1=c2;
        }while(c1!='=');
        printf("%lld\n",a);

    }
    return 0;
}
