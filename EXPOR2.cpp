#include<iostream>
#include<cstdio>

using namespace std;

unsigned long long int gcd(unsigned long long int a,unsigned long long int b) {
    unsigned long long int remainder = a % b;
    if (remainder == 0) {return b;}
    return gcd(b, remainder);
}

int main()
{
    int t,i,j,q;
    unsigned long long s1,s2,s3,g,p,a[100001],c,n;
    cin>>t;
    while(t--)
    {
        p=q=1;
        s1=s2=s3=0;
        scanf("%llu",&n);
        s2=(n*(n-1))/2;
        for(i=0;i<n;i++)
        {
            scanf("%llu",&a[i]);
            s3+=a[i];
        }
        if(!s3)
        {
            printf("0/1\n");
            continue;
        }
        s3/=2;
        for(i=0;i<32;i++)
        {
            c=0;
            for(j=0;j<n;j++)
            {
                if(a[j]&p)
                    c++;
            }
            if(i)
                s1+=(p/2)*c*(2*n-c);
            else
                s1+=(p*c*(2*n-c))/2;
            if(s1>s3 && q)
            {
                s1-=s3;
                q=0;
            }
            p=p<<1;
        }
        g=gcd(s1,s2);
        s1/=g;
        s2/=g;
        printf("%llu/%llu\n",s1,s2);
    }
    return 0;
}
