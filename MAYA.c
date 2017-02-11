#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,l,j,ai,bi,a[20];
    char s[50];
    long long int sum,b[]={1,20,360,7200,144000,2880000,57600000,1152000000,23040000000,460800000000,9216000000000,184320000000000};
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=0;i<n;i++)
            a[i]=0;
        scanf("%*c");
        for(i=0;i<n;i++)
        {
            //scanf("%*c");
            gets(s);
            if(s[0]=='S')
            {
                a[n-1-i]=0;
                continue;
            }
            l=strlen(s);
            ai=bi=0;
            for(j=0;j<l;j++)
            {
                if(s[j]=='.')
                    ai++;
                if(s[j]=='-')
                    bi++;
            }
            a[n-1-i]=ai+5*bi;
            //printf("%d %d  %d ",ai,bi,a[n-1-i]);
        }
        sum=0;
        for(i=0;i<n;i++)
            sum+=a[i]*b[i];
        printf("%lld\n",sum);
    }
    return 0;
}
