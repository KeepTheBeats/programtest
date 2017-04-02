#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int zd(int a,int b){
    if(a>b){
        if(a%b==0){
            return b;
        }
        else{
            return zd(b,a%b);
        }
    }
    else{
        if(b%a==0){
            return a;
        }
        else{
            return zd(a,b%a);
        }
    }
}

class FS{
    private:
        int fz;
        int fm;
    public:
        FS(){}
        FS(int z,int m):fz(z),fm(m){
        
        }
        FS operator + (const FS &f){
            FS f2,f3,f4,f5,f6,f7;
            
            f3=*this;
            f4=f;

            if(f3.fm<0){
                f3.fz=-f3.fz;
                f3.fm=-f3.fm;
            }

            if(f4.fm<0){
                f4.fz=-f4.fz;
                f4.fm=-f4.fm;
            }
            
            f5.fz=f3.fz*f4.fm;
            f5.fm=f3.fm*f4.fm;

            f6.fz=f4.fz*f3.fm;
            f6.fm=f4.fm*f3.fm;

            f7.fz=f6.fz+f5.fz;
            f7.fm=f6.fm;

            int i;
            
            int a;
            int b;
            int c;

            a=abs(f7.fz);
            b=f7.fm;
            /*c=a>b?b:a;
            
            for(i=c;i>1;i--){
                if(a%i==0&&b%i==0){
                    f2.fz=f7.fz/i;
                    f2.fm=f7.fm/i;
                    break;
                }     
            }

            if(i==1){
                f2=f7;
            }*/
            

            if(f7.fz==0){
                f2.fm=1;
                f2.fz=0;
            }
            else{
                c=zd(a,b);
                f2.fz=f7.fz/c;
                f2.fm=f7.fm/c;
            }
            return f2;
            
            


        }
        void show(){
            
            cout<<fz<<"z"<<fm<<"m"<<endl;
        }

};

int main(){
    int n;
    cin>>n;
    int i;

    int z;
    int m;
    for(i=0;i<n;i++){
        scanf("%dz%dm",&z,&m);
        FS f1(z,m);
        scanf("%dz%dm",&z,&m);
        FS f2(z,m);
        FS f3;
        f3=f1+f2;
        f3.show();
    }
    
    return 0;
}
