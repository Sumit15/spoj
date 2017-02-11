#include<iostream>
#include<cstdio>

using namespace std;

long long int count=0;

void merge(int *a,int n)
{
    int i=0,j=n/2,k=0,b[n];
    for(int p=0;p<n;p++)
        b[p]=a[p];
    while(k<n && i<n/2 && j<n)
        if(b[i]<=b[j])
            a[k++]=b[i++];
        else
        {
            a[k++]=b[j++];
            count+=(n/2-i);
        }
    while(i<n/2)
        a[k++]=b[i++];
    while(j<n)
        a[k++]=b[j++];
}

void mergeSort(int *a,int n)
{
    if(n<2)
        return ;
    mergeSort(a,n/2);
    mergeSort(a+n/2,n-(n/2));
    merge(a,n);
}

int main()
{
    int t,a[200000],n;
    cin>>t;
    while(t--)
    {
        count=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        mergeSort(a,n);
        cout<<count<<"\n";
    }
    return 0;
}
