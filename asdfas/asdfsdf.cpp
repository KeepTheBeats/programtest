#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cstring>
#include <vector>

using namespace std;

int main(){
    /*srand((unsigned)time(NULL));
    double a;
    while(1){
        a=rand()%(6)+1;
        cout<<a<<endl;
    }*/

    int i;
    char c;
    vector<char>::iterator it;
    int b;

    vector<char> a;
    for(i=48;i<=57;i++){
        c=i;
        if(c!='1'&&c!='0'&&c!='2'){
            a.push_back(c);
        }
    }
    for(c=97;c<=122;c++){
        if(c!='l'&&c!='o'&&c!='z'){
            a.push_back(c);
        }
    }

    /*for(it=a.begin();it!=a.end();it++){
        cout<<*it<<endl;
    }

    cout<<a.size()<<endl;
    cout<<a[a.size()-1]<<endl;*/

    vector<char*> zong;
    vector<char*>::iterator zit;
    bool bo1;
    

    while(zong.size()<300){
        bo1 = false;
        char ch[5];
        for(i=0;i<4;i++){
            b=rand()%(a.size());
            ch[i]=a[b];
        }
        ch[i]='\0';
        for(zit=zong.begin();zit!=zong.end();zit++){
            if(strcmp(ch,*zit)==0){
                bo1 = true;
                break;
            }
        }
        if(bo1==false){
            zong.push_back(ch);
        }


    }

    
    for(zit==zong.begin(),i=1;zit!=zong.end();zit++,i++){
        cout<<i<<". ";
        printf("%s\n",*zit);
    }
    




    return 0;
}
