#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int jue(int a){
    if(a<0){
        return -a;
    }
    return a;
}

class myrand{
    public:
        myrand(){
        
        }
        myrand(int seed){
            this->seed=seed;
        }
    private:
        int seed;
    public:
        void setseed(int seed){
            this->seed=seed;
        }
        int next(){
            int next = (seed+29)*37%1000;
            this->seed=next;
            return next;
        }
};

int main(){
    time_t t;
    t=time(NULL);
    //r.setseed(10);
    int i;
    for(i=0;i<10;i++){
        myrand r = myrand(t);
        //cout<<r.next()<<endl;
        printf("%d\n",abs(r.next()));
    }
    return 0;
}
