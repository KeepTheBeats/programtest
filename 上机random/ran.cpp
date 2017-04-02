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
    srand((unsigned)time(NULL));

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

    vector<char*> zong[2];
    vector<char*>::iterator zit;
    vector<char*>::iterator zit2;
    bool bo1;
    char *ch;
    //int n;
    //cin>>n;
    
    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    while(zong[0].size()<n3){
        bo1 = false;
        ch=new char[10];
        for(i=0;i<n1;i++){
            b=rand()%(a.size());
            ch[i]=a[b];
        }
        ch[i]='\0';
        for(zit=zong[0].begin();zit!=zong[0].end();zit++){
            if(strcmp(ch,*zit)==0){
                bo1 = true;
                break;
            }
        }
        if(bo1==false){
            zong[0].push_back(ch);
        }


    }

    while(zong[1].size()<n3){
        //bo1 = false;
        ch=new char[10];
        for(i=0;i<n2;i++){
            b=rand()%(a.size());
            ch[i]=a[b];
        }
        ch[i]='\0';
        /*for(zit=zong[1].begin();zit!=zong[1].end();zit++){
            if(strcmp(ch,*zit)==0){
                bo1 = true;
                break;
            }
        }*/
        //if(bo1==false){
        zong[1].push_back(ch);
        //}


    }
    
    for(zit=zong[0].begin();zit!=zong[0].end();zit++){
        printf("%s\n",*zit);
    }
    
    cout<<endl<<endl;

    for(zit2=zong[1].begin();zit2!=zong[1].end();zit2++){
        printf("%s\n",*zit2);
    }
    




    return 0;
}
