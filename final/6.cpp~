#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

class Complex{
    private:
        double a;
        double b;
    public:
        Complex(double a1=0.0,double a2=0.0):a(a1),b(a2){}
        double operator - (Complex com){
            return pow((pow((a-com.a),2)+pow((b-com.b),2)),0.5);
        }
};

template <class T> double dist(T a,T b){
    return (double)fabs(a-b);
}

int main(){
    int a;
    
    int z1;
    int z2;

    float f1;
    float f2;

    double s;
    double x;

    Complex *p;
    Complex *q;

    while(cin>>a,a!=0){
        switch(a){
            case 1:{
                   cin>>z1>>z2;
                   cout<<dist(z1,z2);
                   
                   break;
                   }
            case 2:{
                   cin>>f1>>f2;
                   cout<<dist(f1,f2);
                   
                   break;
                   }
            case 3:{
                   cin>>s>>x;
                   p=new Complex(s,x);
                   cin>>s>>x;
                   q=new Complex(s,x);
                   cout<<dist(*p,*q);
                   
                   break;
                   }
            default:{
                    
                    break;
                    }
        
        }
        cout<<endl;
    }

    return 0;
}
