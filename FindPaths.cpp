#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <stack>

using namespace std;

int s = 7;
int t = 13;

int B[14] = {1,2,3,3,2,1,1,1,3,2,2,4,1,0}; //B和F的元素数为网络中的节点数。
int F[14] = {0};
int A[14][5];  //行数为网络中的节点数，列数为max{B[v]}+1。

//补到max{B[v]}+1个元素，若为源点补-1，不是源点补-2。
int fz[70] =  //fz中的元素数为A的行数乘列数。
{1,-2,-2,-2,-2,
2,0,-2,-2,-2,
1,3,8,-2,-2,
2,4,11,-2,-2,
3,5,-2,-2,-2,
4,-2,-2,-2,-2,
8,-2,-2,-2,-2,
8,-1,-1,-1,-1,
6,9,2,-2,-2,
8,10,-2,-2,-2,
9,11,-2,-2,-2,
3,10,12,13,-2,
11,-2,-2,-2,-2,
-2,-2,-2,-2,-2};
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

	F[t] = -1; //汇点的访问标记设为-1。
//	A[0][0] = 1;
	int i = 0;
	int j = 0;
	int k = 0;

	for(i=0,j=0,k=0;k<70;k++){ //k小于的数等于fz的列数。
		A[i][j] = fz[k];
		j++;
		if(j==5){ //这里当j等于max{B[v]}+1的时候，重置为0。
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
