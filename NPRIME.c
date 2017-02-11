#include<stdio.h>
int a[1299710],i,j,k=1,n,b[100001];int main(){for(i=2;i<1299710;i++){if(!a[i])b[k++]=i;for(j=2*i;j<1299710;j=j+i)a[j]=1;}while(scanf("%d",&n)!=EOF)printf("%d\n",b[n]);return 0;}
