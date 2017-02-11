#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,a[300],sum,m;
    char s[1000005];
    while(1)
    {
        sum=1;
        m=0;
        scanf("%d%*c",&n);
        if(!n)
            break;
        //gets(s);
        scanf ("%[^\n]%*c",s);
        for(i=0;i<300;i++)
            a[i]=0;
        j=0;
        a[s[0]]=1;//a[s[1]]=1;
        for(i=0;j<strlen(s);i++)
        {
            if(j<i)
                j=i+1;
            while(sum<=n && j<strlen(s))
            {
                j++;
                if(!a[s[j]])
                    sum++;
                a[s[j]]++;
            }
            //printf("%d %d ",i,j);
            if(j-i>m)
                m=j-i;
            a[s[i]]--;
            //printf("%d\n",a[s[i]]);
            if(!a[s[i]])
                sum--;
            //i++;
        }
        printf("%d\n",m);
    }
}
