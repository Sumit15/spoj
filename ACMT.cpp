#include<cstdio>
#include<iostream>

using namespace std;

int main()
{
    int t,s,b,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&s,&b);
        if(b<s)
        {
            temp=s;
            s=b;
            b=temp;
        }
        if(s<=2*b)
        {
            printf("%d\n",s);
            continue;
        }
        printf("%d\n",(s+b)/3);
    }
    return 0;
}
