#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

typedef struct node1{
    int rank;
    int parent;
    //int num;
}node;

int findset(node *element,int x){
    if(x==element[x].parent)
        return x;
    return element[x].parent=findset(element,element[x].parent);
}

void merge(node *element,int x,int y){
    x=findset(element,x);
    y=findset(element,y);
    if(x==y)
        return;
    if(element[x].rank<=element[y].rank){
        element[x].parent=y;
        if(element[x].rank==element[y].rank)
            element[y].rank++;
        //element[y].num+=element[x].num;
    }else{
        element[y].parent=x;
        //element[x].num+=element[y].num;
    }
}

int main(){
    int i,t,a,x,y,b;
    long long s=0,px,w;
    node element[1001];
    pair <long long,pair <int,int> > p[300001];
    cin>>t;
    while(t--){
        s=0;
        scanf("%lld%d%d",&px,&a,&b);
        for(i=1;i<=a;i++){
            //vis[i]=0;
            element[i].rank=0;
            element[i].parent=i;
            //element[i].num=1;
        }
        for(i=0;i<b;i++){
            scanf("%d%d%lld",&x,&y,&w);
            p[i]=make_pair(w,make_pair(x,y));
        }
        sort(p,p+b);
        for(i=0;i<b;i++){
            if(findset(element,p[i].second.first)!=findset(element,p[i].second.second)){
                s+=p[i].first;
                //cout<<p[i].first<<" "<<findset(element,p[i].second.first)<<" "<<findset(element,p[i].second.second)<<endl;
                merge(element,p[i].second.first,p[i].second.second);
                /*if(!vis[p[i].second.first]){
                    vis[p[i].second.first]=1;
                    sum++;
                }
                if(!vis[p[i].second.second]){
                    vis[p[i].second.second]=1;
                    sum++;
                }*/
            }
            /*if(sum==a)
                break;*/
        }
        printf("%lld\n",s*px);
    }
    return 0;
}