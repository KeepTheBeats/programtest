#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main(){
    vector<char*> a;
    char c[5];
    c[0]='a';
    c[1]='b';
    c[2]='c';
    c[3]='d';
    c[4]='\0';
    printf("%s\n",c);
    char d[5];
    char c1;
    int i;
    for(i=0;i<4;i++){
        cin>>c1;
        d[i]=c1;
    }
    d[i]='\0';
    if(strcmp(d,c)==0){
        cout<<"="<<endl;
    }
    else{
        cout<<"!="<<endl;
    }
    cout<<a.size()<<endl;
    a.push_back(c);
    cout<<a.size()<<endl;
    a.push_back(d);
    vector<char*>::iterator it;
    for(it=a.begin();it!=a.end();it++){
        printf("%s\n",*it);
    }
    cout<<a.size()<<endl;
    printf("%s\n",a[0]);

    return 0;
}
