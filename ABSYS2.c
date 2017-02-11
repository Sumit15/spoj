#include<stdio.h>
#include<string.h>
#include<math.h>

int l[3];
char a[3][50];

int str2num(int k)
{
    int i,s=0;
    for(i=0;i<l[k];i++)
        s+=(a[k][l[k]-i-1]-'0')*pow(10,i);
    return s;
}

int main()
{
    int t,i,b[3],m,j;
    scanf("%d",&t);
    while(t--)
    {
        m=-1;
        scanf("%*c%*c%s%*c%*c%*c%s%*c%*c%*c%s",a[0],a[1],a[2]);
        l[0]=strlen(a[0]);
        l[1]=strlen(a[1]);
        l[2]=strlen(a[2]);
        for(i=0;i<3;i++)
        {
            for(j=0;j<l[i];j++)
                if(a[i][j]=='m')
                {
                    m=i;
                    break;
                }
                if(m!=-1)
                    break;
        }
        for(i=0;i<3;i++)
        {
            if(m==i)
                continue;
            b[i]=str2num(i);
        }
        if(m==2)
            b[2]=b[0]+b[1];
        else
            b[m]=b[2]-b[1-m];
        printf("%d + %d = %d\n",b[0],b[1],b[2]);
    }
    return 0;
}
