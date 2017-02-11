#include<stdio.h>
#include<string.h>

int main()
{
    int l,i,c,t=1024;
    char s[105];
    while(t--)
    {
        scanf("%s",s);
        c=0;
        if(s[0]=='0')
        {
            printf("0\n");
            continue;
        }
        if(s[0]=='1' && s[1]=='\0')
        {
            printf("1\n");
            continue;
        }
        l=strlen(s);
        s[l+1]='\0';
        for(i=l-1;i>=0;i--)
            s[i+1]=s[i];
        s[0]='0';
        for(i=l;i>0;i--)
        {
            if(s[i]=='0')
            {
                s[i]='9';
                continue;
            }
            s[i]--;
            break;
        }
        for(i=l;i>=0;i--)
        {
            if(2*(s[i]-'0')+c > 9)
            {
                s[i]='0'+ 2*(s[i]-'0')+c -10;
                c=1;
                continue;
            }
            s[i]='0'+ 2*(s[i]-'0')+c;
            c=0;
        }
        if(s[0]=='0')
        {
            for(i=1;i<=l;i++)
                printf("%c",s[i]);
            printf("\n");
            continue;
        }
        printf("%s\n",s);
    }
    return 0;
}
