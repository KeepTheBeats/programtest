#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

//int a[1000][1000];
//int vis[1000];

typedef struct gra{
	int a[1000][1000];
	int vis[1000];
	int N;
	int M;
}gra;

void DFF(gra* g,int i,int s){
	g->vis[i]=1;
	int j;
	for(j=1;j<=g->N;j++){
		if(j!=s&&g->vis[j]==0&&g->a[i][j]==1){
			DFF(g,j,s);
		}
	}
}


int DF(gra* g,int s){
	int i;
	int ji;
	ji=0;
	int j;
	int m;
	

	for(i=1;i<=g->N;i++){
		m=0;
		for(j=1;j<g->N;j++){
			if(g->a[j][i]==1&&g->a[i][j]==0){
				m=1;
				break;
			}	
		}
		if(i!=s&&m==0&&g->vis[i]==0){
			DFF(g,i,s);
			ji++;	
		}
	}
	return ji;
}


int main(){
	gra* g;
	g=(gra*)malloc(sizeof(gra));
	int i,j;
	int K;
	cin>>g->N>>g->M>>K;
	for(i=1;i<=g->N;i++){
		for(j=1;j<=g->N;j++){
			g->a[i][j]=0;
		}
		g->vis[i]=0;
	}

	int h,l;

	for(i=0;i<g->M;i++){
		cin>>h>>l;
		g->a[h][l]=1;
	}

	int s;
	int jilu;
	int k1;
	for(i=0;i<K;i++){
		for(k1=1;k1<=g->N;k1++){
			g->vis[k1]=0;
		}
		cin>>s;
		jilu=DF(g,s);
		if(jilu!=0){
			cout<<jilu-1<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
	}

	return 0;
}
