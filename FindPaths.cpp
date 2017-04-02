#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <stack>

using namespace std;

int s = 5;
int t = 7;

int B[8] = {4,3,1,3,1,5,3,0};
int F[8] = {0};
int A[8][6];
int fz[48] = {2,3,6,7,-2,-2,3,4,6,-2,-2,-2,0,-2,-2,-2,-2,-2,0,1,6,-2,-2,-2,1,-2,-2,-2,-2,-2,1,4,6,7,-2,-2,0,1,3,-2,-2,-2,-1,-1,-1,-1,-1,-1};
stack<int> S;
stack<int> T;


void Traversing(int a){
	int x;

	if(F[a] == 0){
		F[a] = 1;
		if(!S.empty()){
			x = S.top();
		}
		S.push(a);
	}

	int u;

	u = 0;

	while(A[a][u] != -2){
		if(A[a][u] >= 0){
			if(F[A[a][u]] == 0){
				Traversing(A[a][u]);
			}
			else if(F[A[a][u]] == -1){
				while(!S.empty()){
					T.push(S.top());
					S.pop();
				}
				while(!T.empty()){
					S.push(T.top());
					cout<<T.top()<<"->";
					T.pop();
				}
				cout<<t<<endl;
			}
		}
		else if(A[a][u] == -1){
			return;
		}
		u++;
	}

	x = S.top();
	F[x] = 0;
	S.pop();
	return;
}




int main(){

	F[t] = -1; //汇点的访问标记设为-1
//	A[0][0] = 1;
	int i = 0;
	int j = 0;
	int k = 0;

	for(i=0,j=0,k=0;k<48;k++){ 
		A[i][j] = fz[k];
		j++;
		if(j==6){
			j=0;
			i++;
		}
	}
	
	S.push(s);
	F[s] = 1;
	Traversing(s);



//	for(i=0;i<6;i++){
//		for(j=0;j<3;j++){
//			cout<<A[i][j]<<"\t";
//		}
//		cout<<endl;
//	}



	return 0;
}
