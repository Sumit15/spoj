#include<stdio.h>
#include<string.h>

int main()
{
    int a[1000],i,j,k,l,t,max;
    char s[1002];
    scanf("%d%*c",&t);
    while(t--)
    {
        j=k=max=0;
        gets(s);
        l=strlen(s);
        for(i=0;i<l;i++)
            if(s[i]>='a' && s[i]<='z')
            j++;
            else
            {
                if(j)
                    a[k++]=j;
                j=0;
            }
        //printf("%d  %d\n",k,j);
        a[k++]=j;
        j=1;
        //for(i=0;i<k;i++)
        //    printf("%d ",a[i]);
        //printf("\n");
        for(i=1;i<k;i++)
            if(a[i]==a[i-1])
                j++;
            else
            {
                if(j>max)
                    max=j;
                j=1;
            }
        if(a[0])
            if(j>max)
                max=j;
        printf("%d\n",max);
    }
    return 0;
}
