#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

template <class T> int addSet(T *myset,T elem,int &len){
    int i;
    if(len==100){
        return 100;
    }
    else{
        for(i=0;i<len;i++){
            if(myset[i]==elem){
                return 101;
            }
        }
        myset[len]=elem;
        len++;
        return len-1;
    }
}

template <class T> int deleSet(T *myset,T elem,int &len){
    int i;
    int j;
    for(i=0;i<len;i++){
        if(myset[i]==elem){
            for(j=i;j+1<len;j++){
                myset[j]=myset[j+1];
            }
            len--;
            return i;
        }
    }
    return 100;
}

template <class T> int findElem(T *myset,T elem,int len){
    int i;
    for(i=0;i<len;i++){
        if(myset[i]==elem){
            return i;
        }
    }
    return 100;
}

int main(){
    int intSet[100];
    double douSet[100];
    string strSet[100]; //这里按题目要求应该为大写S
    
    int intLen=0;
    int douLen=0;
    int strLen=0;
    
    int a1;
    int a2;
    
    int b1;
    double b2;
    string b3;

    int f;

    while(cin>>a1&&a1!=0){
        switch(a1){
            case 1:
                cin>>a2;
                switch(a2){
                    case 1:
                        cin>>b1;
                        f=addSet(intSet,b1,intLen);
                        if(f==100){
                            cout<<"Full Set"<<endl;
                        }
                        else if(f==101){
                            cout<<b1<<" is already exist!"<<endl;
                        }
                        else{
                            cout<<f<<endl;
                        }
                        break;

                    case 2:
                        cin>>b1;
                        f=deleSet(intSet,b1,intLen);
                        if(f==100){
                            cout<<b1<<" is not exist!"<<endl;
                        }
                        else{
                            cout<<f<<endl;
                        }
                        break;

                    case 3:
                        cin>>b1;
                        f=findElem(intSet,b1,intLen);
                        if(f==100){
                            cout<<b1<<" is not exist!"<<endl;
                        }
                        else{
                            cout<<f<<endl;
                        }
                        break;

                    default:

                        break;
                }
                break;
                
            case 2:

                cin>>a2;
                switch(a2){
                    case 1:
                        cin>>b2;
                        f=addSet(douSet,b2,douLen);
                        if(f==100){
                            cout<<"Full Set"<<endl;
                        }
                        else if(f==101){
                            cout<<b2<<" is already exist!"<<endl;
                        }
                        else{
                            cout<<f<<endl;
                        }
                        break;

                    case 2:
                        cin>>b2;
                        f=deleSet(douSet,b2,douLen);
                        if(f==100){
                            cout<<b2<<" is not exist!"<<endl;
                        }
                        else{
                            cout<<f<<endl;
                        }
                        break;

                    case 3:
                        cin>>b2;
                        f=findElem(douSet,b2,douLen);
                        if(f==100){
                            cout<<b2<<" is not exist!"<<endl;
                        }
                        else{
                            cout<<f<<endl;
                        }
                        break;

                    default:

                        break;
                }
                break;

            case 3:

                cin>>a2;
                switch(a2){
                    case 1:
                        cin>>b3;
                        f=addSet(strSet,b3,strLen);
                        if(f==100){
                            cout<<"Full Set"<<endl;
                        }
                        else if(f==101){
                            cout<<b3<<" is already exist!"<<endl;
                        }
                        else{
                            cout<<f<<endl;
                        }
                        break;

                    case 2:
                        cin>>b3;
                        f=deleSet(strSet,b3,strLen);
                        if(f==100){
                            cout<<b3<<" is not exist!"<<endl;
                        }
                        else{
                            cout<<f<<endl;
                        }
                        break;

                    case 3:
                        cin>>b3;
                        f=findElem(strSet,b3,strLen);
                        if(f==100){
                            cout<<b3<<" is not exist!"<<endl;
                        }
                        else{
                            cout<<f<<endl;
                        }
                        break;

                    default:

                        break;
                }
                break;

            default:

                break;
        }
    }

    return 0;
}
