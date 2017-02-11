#include<iostream>
#include<cstdio>
#include<string>
#define MAX 1000000

using namespace std;

int main(){
	int i,j,q[MAX+1]={0},a[MAX+1],count=0,t,n,x,z;
	string s;
	q[1]=1;
	for(i=2;i<MAX;i=i+1){
		if(!q[i]){
			for(j=2;j*i<MAX;j++)
				q[i*j]=1;
		}
	}
	/*for(i=3;i<MAX;i=i+2)
		if(!q[i])
			p[k++]=i;
	*/
	for(i=1;i<MAX;i++){
		if(!q[i]){
			x=10;
			z=1;
			s=to_string(i);
			for(i=0;i<s.length();i++)
				if(s[i]=='0')
					z=0;
			if(z){
				while(i/(x/10)){
					if(q[i%x]){
						x=0;
						break;
					}
					x*=10;
				}
			}
			if(z && x)
				count++;
		}
		a[i]=count;
	}
	a[MAX]=count;
	cin>>t;
	while(t--){
		scanf("%d",&n);
		printf("%d\n",a[n]);
	}
	return 0;
}