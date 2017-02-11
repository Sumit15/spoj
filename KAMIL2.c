#include<stdio.h>
int main(){int s,t=10;char c;while(t--){s=1;do{c=getchar();if(c=='T'||c=='D'||c=='L'||c=='F')s*=2;}while(c!='\n');printf("%d\n",s);}return 0;}
