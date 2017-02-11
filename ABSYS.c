#include<stdio.h>
#include<string.h>

/*int toString(char a[]) {
  int c, sign, offset, n;

  if (a[0] == '-') {  // Handle negative integers
    sign = -1;
  }

  if (sign == -1) {  // Set starting position to convert
    offset = 1;
  }
  else {
    offset = 0;
  }

  n = 0;

  for (c = offset; a[c] != '\0'; c++) {
    n = n * 10 + a[c] - '0';
  }

  if (sign == -1) {
    n = -n;
  }

  return n;
}*/

int main()
{
    int t,x,m,l1,l2,l3,i,dec;
    char s1[10000],s2[10000],s3[10000];
    scanf("%d",&t);
    while(t--)
    {
        m=0;
        scanf("%s + %s = %s",s1,s2,s3);
        l1=strlen(s1);
        l2=strlen(s2);
        l3=strlen(s3);
        for(i=0; i<l1; i++)
            dec = dec * 10 + ( s1[i] - '0' );
        printf("%d",dec);
        //printf("%d\n%d\n%d\n",toString(s1),toString(s2),toString(s3));
        /*for(i=0;i<l1;i++)
            if(s1[i]>'9' || s1[i]<'0')
            {
                m=1;
                x=toString(s3[10000])-toString(s2[10000]);
                printf("%d\n",x);
                printf("%d + %s = %s\n",x,s2,s3);
            }
        if(m==1)
            continue;
        for(i=0;i<l2;i++)
            if(s2[i]>'9' || s2[i]<'0')
            {
                m=1;
                x=toString(s3[10000])-toString(s1[10000]);
                printf("%s + %d = %s\n",s1,x,s3);
            }
        if(m==1)
            continue;
        x=toString(s1[10000])+toString(s2[10000]);
        printf("%s + %s = %d\n",s1,s2,x);*/
    }
    return 0;
}
