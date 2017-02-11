#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	int t,i;
	long long n,k,s,p;
	cin>>t;
	for(i=1;i<=t;i++){
		s=0;
		scanf("%lld %lld",&n,&k);
		p=k;
		while(n/p){
			s+=n/p;
			p*=k;
		}
		printf("Case %d: %lld\n",i,s);
	}
	return 0;
}