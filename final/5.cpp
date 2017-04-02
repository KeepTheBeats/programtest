#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

class DDate{
    private:
        int year;
        int month;
        int day;
    public:
        DDate(int y=0,int m=0,int d=0):year(y),month(m),day(d){}
        bool isLeap(){
            if(year%100==0){
                if(year%400==0){
                    return true;
                }
                else{
                    return false;
                }
            }
            else{
                if(year%4==0){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
};

int main(){
    int a;
    int b;
    int c;
    
    cin>>a>>b>>c;
    DDate d(a,b,c);
    if(d.isLeap()){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    return 0;
}
