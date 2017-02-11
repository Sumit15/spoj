#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a[500000],b[500000],c[500000];
    int n,i,p,m;
    long long int s;
    while(1)
    {
        m=s=0;
        scanf("%d%d",&n,&p);
        if(n==-1)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            s+=a[i];
        }
        //cout<<"before for "<<" "<<endl;
        for(i=0;i<n;i++)
        {
            //cout<<"Iteration "<<i<<" Starts "<<endl;
            b[i]=((float)a[i]*p)/s;
            if(!b[i])
                b[i]=1;
            //cout<<"1 ";
            p-=b[i];
            //cout<<"2 "<<b[i];
            if(a[i]%b[i])
                c[i]=a[i]/b[i]+1;
            else
                c[i]=a[i]/b[i];
            //cout<<"3 ";
            if(c[i]>c[m])
                m=i;
            //cout<<"End"<<endl;
        }
        //cout<<"before while"<<endl;
        while(p>0)
        {
            b[m]++;
            p--;
            if(a[m]%b[m])
                c[m]=a[m]/b[m]+1;
            else
                c[m]=a[m]/b[m];
            for(i=0;i<n;i++)
                if(c[i]>c[m])
                m=i;
        }
        //cout<<"after while"<<endl;
        printf("%d\n",c[m]);

    }
    return 0;
}
