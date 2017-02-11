#include<cstdio>
#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <int> s;
    int m,n,t,x,k,i;
    while(1)
    {
        m=0,k=1;
        scanf("%d",&n);
        if(!n)
            break;
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            if(x==k)
            {
                k++;
                //printf("Is passed\n");
                continue;
            }
            if(!s.empty())
            {
                while(!s.empty() && k==s.top())
                {
                    s.pop();
                    k++;
                }

            }
            s.push(x);
            //printf("Is pushed\n");
        }
        if(!s.empty())
        {
            for(i=0;i<s.size();i++)
            {
                if(s.top()!=k)
                    m=1;
                s.pop();
                k++;
            }
        }
        if(m)
            printf("no %d\n",s.size());
        else
            printf("yes %d\n",s.size());
        //s.clear();
        while(!s.empty())
            s.pop();
    }
    return 0;
}
