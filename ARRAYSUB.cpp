#include<iostream>
#include<deque>
#include<cstdio>

using namespace std;

int main()
{
    int
    cin>>n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        a[i]=make_pair(i,x);
    }
    cin>>k;
    for(i=0;i<k;i++)
    {
        if(q.empty())
            q.push_back(a[i]);
        else
        {
            while(!q.empty() || q.back().second<=a[i].second)
                q.pop_back();
            q.push_back(a[i]);
        }
    }
    return 0;
}
