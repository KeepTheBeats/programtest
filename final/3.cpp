#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

class student{
    private:
        long xh;
        int cj;
    public:
        student(long x=0,int c=0):xh(x),cj(c){}
        friend student* average(student *p,int count);


};

student* average (student *p,int count){
    int i;
    int s=0;
    
    for(i=0;i<count;i++){
        if(p[i].cj>s){
            s=p[i].cj;
        }
    }

    for(i=0;i<count;i++){
        if(p[i].cj==s){
            cout<<p[i].xh;
            break;
        }
    }
    for(i=i+1;i<count;i++){
        if(p[i].cj==s){
            cout<<" "<<p[i].xh;
        }
    }
    cout<<endl;
}

int main(){
    student a[100];
    long b;
    int c;
    int i;
    i=0;

    while(cin>>b,b!=0){
        cin>>c;
        a[i]=student(b,c);
        i++;
    }

    average(a,i);

    return 0;
}
