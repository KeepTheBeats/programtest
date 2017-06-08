#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

#define MM 10000


float x[MM]={0};
float x_ji[MM]={0};
float z=-1;
float z_ji=-1;

float l;
int n;

int main(){
	void gui(int a);
	void showx();
	void showx_ji();

	int i;

	n=15;
	l=11;

//	for(i=0;i<MM;i++){
//		x[i]=-1;
//	}

//	for(i=0;i<MM;i++){
//		cout<<x[i]<<endl;
//	}
	gui(1);

	showx();
	showx_ji();
	

	printf("z=%f\n",z);
	printf("z_ji=%f\n",z_ji);
	cout<<"hello1"<<endl;
	printf("hello2\n");
	return 0;
}

void gui(int a){
	bool yue_budeng();
	bool yue_deng();
	void showx_ji();
	void showx();
	float mu();
	int i;
	while(yue_budeng()){
		if(a==n){
			if(yue_deng()){
				z=mu();
				if(z_ji<0 || z_ji>z){
					z_ji=z;
					for(i=1;i<=n;i++){
						x_ji[i]=x[i];
					}
				}
			}
			printf("%d\n",a);
			showx();
			printf("\n");
		}
		else{
			gui(a+1);
		}
		x[a]=x[a]+0.5;
	}
//	if(a>=14){
//	printf("%d\n",a);
//	showx();
//	printf("\n");
//	}
	x[a]=0;
}

bool yue_budeng(){
	if	(
			x[1]<=15&& 	
			x[2]<=12&& 	
			x[3]<=26&& 	
			x[4]<=28&& 	
			x[5]<=25&& 	
			x[6]<=23&& 	
			x[7]<=19&& 	
			x[8]<=21&& 	
			x[9]<=31&& 	
			x[10]<=26&& 	
			x[11]<=31&& 	
			x[12]<=27&& 	
			x[13]<=28&& 	
			x[14]<=16&& 	
			x[15]<=35&& 

			x[1]<=l&&
			x[15]+x[2]<=l&&
			x[14]+x[3]<=l&&
			x[13]+x[5]+x[4]<=l&&
			x[2]<=l&&
			x[11]+x[7]<=l&&
			x[10]<=l&&
			x[8]+x[9]<=l&&
			
			
			x[1]<=l&& 	
			x[2]<=l&& 	
			x[3]<=l&& 	
			x[4]<=l&& 	
			x[5]<=l&& 	
			x[6]<=l&& 	
			x[7]<=l&& 	
			x[8]<=l&& 	
			x[9]<=l&& 	
			x[10]<=l&& 	
			x[11]<=l&& 	
			x[12]<=l&& 	
			x[13]<=l&& 	
			x[14]<=l&& 	
			x[15]<=l 
			
		){
		return true;
	}
	else{
		return false;
	}
}

bool yue_deng(){
	if	(
			
			x[1]==x[15]+x[10]+x[11]&&
			x[15]+x[2]==x[12]+x[14]&&
			x[14]+x[3]==0&&
			x[13]+x[9]==l&&
			x[13]+x[5]+x[4]==x[8]&&
			x[2]==x[12]+x[6]&&
			x[4]==0&&
			x[11]+x[7]==l&&
			x[10]==x[1]+x[3]+x[5]&&
			x[8]+x[9]==x[6]+x[7]
			
		){
		return true;
	}else{
		return false;
	}
}

void showx(){
	int i;
	for(i=1;i<=n;i++){
		printf("x%d=%f\n",i,x[i]);
	}
}

void showx_ji(){
	int i;
	for(i=1;i<=n;i++){
		printf("x_ji%d=%f\n",i,x_ji[i]);
	}
}

float mu(){
	float z;
	z = 6
	*x[1]+15
	*x[2]+14
	*x[3]+15
	*x[4]+3
	*x[5]+13
	*x[6]+7
	*x[7]+14
	*x[8]+15
	*x[9]+6
	*x[10]+14
	*x[11]+6
	*x[12]+15
	*x[13]+10
	*x[14]+12
	*x[15];
	return z;
}
