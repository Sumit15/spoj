#include<stdio.h>
#include<string.h>
int main()
{
    int i,m;
    char s[2000],c,C;
    while(1)
    {
        m=0;
        gets(s);
        if(s[0]=='*')
            break;
        if(s[0]=='\n' || s[0]==0)
            continue;
        //scanf("%*c");
        for(i=0;i<strlen(s);i++)
            if(s[i]!=' ')
            {
                c=s[i];
                break;
            }
        if(c<91)
            C=c+32;
        else
            C=c-32;
        //printf("%d",i);
        for(;i<strlen(s)-1;i++){
                //printf("FUCK\n");
            if(s[i]==' ')
            {
                if(s[i+1]!=' ' && !(s[i+1]==c || s[i+1]==C))
                {
                    m=1;
                    break;
                }
            }
        }
        if(m==1)
            printf("N\n");
        else
            printf("Y\n");
    }
    return 0;
}
