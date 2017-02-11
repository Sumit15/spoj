#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,x,a[5005];
    char s[5005];
    //long long int prev,cur,temp;
    while(1)
    {
        scanf("%s",s);
        if(s[0]=='0')
            break;
        l=strlen(s);
        if(l==1)
        {
            printf("1\n");
            continue;
        }
        a[0]=1;
        if(10*(s[0]-'0')+(s[1]-'0') <= 26 )
        {
            if(s[1]=='0')
               {
                   if(s[0]>'2')
                    a[l-1]=0;
                   else
                    a[1]=1;
               }
            else
                a[1]=2;
        }
        else
            a[1]=1;
        for(i=2;i<l;i++)
        {
            if(s[i]=='0')
            {
                if(s[i-1]=='0' || s[i-1]>'2')
                {
                    a[l-1]=0;
                    break;
                }
                a[i]=a[i-2];
                continue;
            }
            x=10*(s[i-1]-'0')+(s[i]-'0');
            if(s[i-1]=='0')
            {
                a[i]=a[i-1];
                continue;
            }
            if(x>26)
            {
                a[i]=a[i-1];
                //continue;
            }else
            {
                a[i]=a[i-1]+a[i-2];
            }
        }
        printf("%d\n",a[l-1]);
    }
    return 0;
}
