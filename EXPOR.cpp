#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

long long int gcd(long long int a,long long int b) {
    long long int remainder = a % b;

    if (remainder == 0) {
        return b;
    }
    return gcd(b, remainder);
}

int main()
{
    int t,i,j;
    long long s1,s2,s,s0,s3,q,p,a[100001],g,c,n;
    cin>>t;
    while(t--)
    {
        p=1;
        s1=s2=s3=s0=s=0;
        scanf("%lld",&n);
        s3=n*(n-1);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            s1+=a[i];
        }
        s2=s1;
        for(i=0;i<32;i++)
        {
            c=0;
            for(j=0;j<n;j++)
            {
                if(a[j]&p)
                    c++;
            }
            q=p*c*(2*n-c);
            s+=q/s3;
            s0+=q%s3;
            s+=s0/s3;
            s0=s0%s3;
            p=p<<1;
        }
        //printf("%lld %lld %lld %lld\n",s,s0,s3,s1);
        s-=s1/s3;
        s1=s1%s3;
        s--;
        s0+=s3-s1;
        s+=s0/s3;
        //s0=(s0+s3-s1)%s3;
        s0=s0%s3;
        //printf("%lld %lld %lld\n",s,s0,s3);
        //s2=s2-s1;
        //s1=n*(n-1);
        if(!s2)
        {
            printf("0/1\n");
            continue;
        }
        if(!s0)
            g=s3;
        else
            g=gcd(s0,s3);
        //printf("%lld %lld %lld\n",s,s0,g);
        //s/=g;
        s3/=g;
        s0/=g;
        //printf("%lld\n",s);
        s0+=s*s3;
        //s0/=g;
        printf("%lld/%lld\n",s0,s3);
    }
    return 0;
}
