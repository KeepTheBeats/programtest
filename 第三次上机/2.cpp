#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

class Point_1D{
    protected:
        float x;
    public:
        Point_1D(float p = 0.0):x(p){
        
        }
        float distance(){
            return abs(x);
        }
};

class Point_2D:public Point_1D{
    protected:
        float y;
    public:
        Point_2D(float p = 0.0,float q = 0.0):Point_1D(p),y(q){
        
        }
        float distance(){
            return sqrt(pow(x,2)+pow(y,2));
        }
};

class Point_3D:public Point_2D{
    protected:
        float z;
    public:
        Point_3D(float p = 0.0,float q = 0.0,float r = 0.0):Point_2D(p,q),z(r){
        
        }
        float distance(){
            return sqrt(pow(x,2)+pow(y,2)+pow(z,2));
        }
};


int main(){
    int a;

    float b;
    float c;
    float d;

    while(cin>>a,a!=0){
        switch(a){
            case 1:{
                   cin>>b;
                   cout<<"Distance from Point "<<b<<" to original point is ";
                   cout<<Point_1D(b).distance()<<endl;
                   break;
                   }
            case 2:{
                   cin>>b>>c;
                   cout<<"Distance from Point("<<b<<","<<c<<") to original point is ";
                   cout<<Point_2D(b,c).distance()<<endl;
                   break;
                   }
            case 3:{
                   cin>>b>>c>>d;
                   cout<<"Distance from Point("<<b<<","<<c<<","<<d<<") to original point is ";
                   cout<<Point_3D(b,c,d).distance()<<endl;
                   break;
                   }
            default:{
                    
                    break;
                    }
        }
    }
    return 0;
}
