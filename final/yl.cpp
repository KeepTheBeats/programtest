#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cstring>
#include <vector>


using namespace std;

int main(){
    srand((unsigned)time(NULL));

    vector<char>::iterator it;
    vector<char> a;

    int i;
    int j;
    char c;
    int b;
    double fen;

    for(c=97;c<=122;c++){
        a.push_back(c);
    }
    
    char *czj;

    for(i=0;i<10002;i++){
        czj=new char[6];
        for(j=0;j<4;j++){
            b=rand()%(a.size());
            czj[j]=a[b];
            czj[j+1]='\0';
        }
        printf("%s ",czj);
        fen=double((rand()%51))/double(10);
        cout<<fen<<endl;
    }

    cout<<"-1"<<endl;




    

    return 0;
}
