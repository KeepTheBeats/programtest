#include "Lingd11.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>

#pragma comment(lib,"Lingd11.lib")

using namespace std;

void main(){
	pLSenvLINGO pLINGO;
	pLINGO = LScreateEnvLng();

	if(!pLINGO){
		printf("Can't\n");
	
	}

	return 0;
}

