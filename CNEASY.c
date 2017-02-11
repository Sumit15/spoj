#include<stdio.h>

int main()
{
    int t,a[1005],n,ip,i;
    float max,fp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%*s%f",&a[i]);
        for(i=1;i<n;i++)
            if(a[i]-a[i-1]>max)
            max=a[i]-a[i-1];
        if(max<360+a[0]-a[n-1])
            max=360+a[0]-a[n-1];
        max=1.2*(360-max);
        ip=max;
        fp=max-ip;
        if(fp>0)
            ip++;
        printf("%d",ip);
    }
    return 0;
}
