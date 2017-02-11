#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
	int a[102],i,j,k,p=0,b[1000002],n;
	long long s=0;
	//cout<<"Here1\n";
	cin>>n;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				//if(a[i]*a[j]+a[k])
					b[p++]=a[i]*a[j]+a[k];
	sort(b,b+p);
	//cout<<"Here2\n";
	for(i=0;i<n;i++)
		if(a[i])
			for(j=0;j<n;j++)
				for(k=0;k<n;k++)
					s+=upper_bound(b,b+p,a[i]*(a[j]+a[k]))-lower_bound(b,b+p,a[i]*(a[j]+a[k]));
	//cout<<"Here3\n";
	cout<<s;
	return 0;
}