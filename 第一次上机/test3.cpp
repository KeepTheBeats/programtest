#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

template <class T> class MySet{
    private:
        T data[100];
        int count;
    public:
        MySet(){
            count=0;

        }
        int addSet(T elem){
            int i;
            for(i=0;i<count;i++){
                if(data[i]==elem){
                    return 101;
                }
            }
            if(count==100){
                return 100;
            }
            else{
                data[count]=elem;
                count++;
                return count-1;
            }
        }
        int deleSet(T elem){
            int i;
            int j;
            for(i=0;i<count;i++){
                if(data[i]==elem){
                    for(j=i;j+1<count;j++){
                        data[j]=data[j+1];
                    }
                    count--;
                    return i;
                }
            }
            return 100;
        }
        int findElem(T elem){
            int i;
            for(i=0;i<count;i++){
                if(data[i]==elem){
                    return i;
                }
            }
            return 100;
        }

};

int main(){
    MySet<int> intSet;
    MySet<double> douSet;
    MySet<string> strSet;
    
    int a1;
    int a2;
    
    int b1;
    double b2;
    string b3;

    int f;

    cin>>a1;
    while(a1!=0){
        switch(a1){
            case 1:
                cin>>a2;
                switch(a2){
                    case 1:
                        cin>>b1;
                        f=intSet.addSet(b1);
                        if(f==100){
                            cout<<"Full Set."<<endl;
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
                        f=intSet.deleSet(b1);
                        if(f==100){
                            cout<<b1<<" is not exist!"<<endl;
                        }
                        else{
                            cout<<f<<endl;
                        }
                        break;

                    case 3:
                        cin>>b1;
                        f=intSet.findElem(b1);
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
                        f=douSet.addSet(b2);
                        if(f==100){
                            cout<<"Full Set."<<endl;
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
                        f=douSet.deleSet(b2);
                        if(f==100){
                            cout<<b2<<" is not exist!"<<endl;
                        }
                        else{
                            cout<<f<<endl;
                        }
                        break;

                    case 3:
                        cin>>b2;
                        f=douSet.findElem(b2);
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
                        f=strSet.addSet(b3);
                        if(f==100){
                            cout<<"Full Set."<<endl;
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
                        f=strSet.deleSet(b3);
                        if(f==100){
                            cout<<b3<<" is not exist!"<<endl;
                        }
                        else{
                            cout<<f<<endl;
                        }
                        break;

                    case 3:
                        cin>>b3;
                        f=strSet.findElem(b3);
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
        cin>>a1;
    }



    return 0;
}
