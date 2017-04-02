#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Complex{
    private:
        double shi;
        double xu;
    public:
        Complex(){shi=0.0,xu=0.0;}
        Complex(double s,double x):shi(s),xu(x){}
        Complex operator * (Complex c);
        void display(){
            if(xu==0){
                if(shi==0){
                    cout<<"0";
                }
                else{
                    cout<<shi;
                }
            }
            else if(shi==0){
                if(xu==1){
                    cout<<"i";
                }
                else if(xu==-1){
                    cout<<"-i";
                }
                else {        
                    cout<<xu<<"i";
                }
            }
            else{
                if(xu==1){
                    cout<<shi<<"+i";
                }
                else if(xu==-1){
                    cout<<shi<<"-i";
                }
                else if(xu<0){
                    cout<<shi<<xu<<"i";
                }
                else{
                    cout<<shi<<"+"<<xu<<"i";
                }
            }
        }
};

Complex Complex::operator* (Complex c){
    Complex d;
    d.shi=shi*c.shi-xu*c.xu;
    d.xu=xu*c.shi+shi*c.xu;
    return d;
}

int main(){
    Complex c1,c2,c3;
    double a,b;
    a=0.0;
    b=0.0;
    
    string s1;
    string s2;
    stringstream ss;
    ss.clear();
    string::size_type st;
    string::size_type st2;
    string sb;

    cin>>s1>>s2;

    if(s1=="i"){
        c1=Complex(0,1);
    }
    else if(s1=="-i"){
        c1=Complex(0,-1);
    }
    else if(s1[s1.size()-1]!='i'){
        ss<<s1;
        ss>>a;
        ss.clear();
        c1=Complex(a,0);
    }
    else{
        st=s1.find("+");
        if(st==string::npos){
            st2=s1.rfind("-");
            if(st2==string::npos){
                sb=s1.substr(0,s1.size()-1);
                ss<<sb;
                ss>>b;
                ss.clear();
                c1=Complex(0,b);
            }
            else{
                if(st2==0){
                    sb=s1.substr(0,s1.size()-2-0+1);
                    ss<<sb;
                    ss>>b;
                    ss.clear();
                    c1=Complex(0,b);
                }
                else{
                    if(s1[st2+1]=='i'){
                        sb=s1.substr(0,st2-1-0+1);
                        ss<<sb;
                        ss>>a;
                        ss.clear();
                        c1=Complex(a,-1);
                    }
                    else{
                        sb=s1.substr(0,st2-1-0+1);
                        ss<<sb;
                        ss>>a;
                        ss.clear();
                        sb=s1.substr(st2,s1.size()-2-st2+1);
                        ss<<sb;
                        ss>>b;
                        ss.clear();
                        c1=Complex(a,b);
                    }
                }
                

            }
        }
        else{
            if(st==s1.size()-2){
                sb=s1.substr(0,st-1-0+1);
                ss<<sb;
                ss>>a;
                ss.clear();
                c1=Complex(a,1);
            }
            else{
                sb=s1.substr(0,st-1-0+1);
                ss<<sb;
                ss>>a;
                ss.clear();
                sb=s1.substr(st+1,s1.size()-2-(st+1)+1);
                ss<<sb;
                ss>>b;
                ss.clear();
                c1=Complex(a,b);
            }
        }
    }
    



    if(s2=="i"){
        c2=Complex(0,1);
    }
    else if(s2=="-i"){
        c2=Complex(0,-1);
    }
    else if(s2[s2.size()-1]!='i'){
        ss<<s2;
        ss>>a;
        ss.clear();
        c2=Complex(a,0);
    }
    else{
        st=s2.find("+");
        if(st==string::npos){
            st2=s2.rfind("-");
            if(st2==string::npos){
                sb=s2.substr(0,s2.size()-1);
                ss<<sb;
                ss>>b;
                ss.clear();
                c2=Complex(0,b);
            }
            else{
                if(st2==0){
                    sb=s2.substr(0,s2.size()-2-0+1);
                    ss<<sb;
                    ss>>b;
                    ss.clear();
                    c2=Complex(0,b);
                }
                else{
                    if(s2[st2+1]=='i'){
                        sb=s2.substr(0,st2-1-0+1);
                        ss<<sb;
                        ss>>a;
                        ss.clear();
                        c2=Complex(a,-1);
                    }
                    else{
                        sb=s2.substr(0,st2-1-0+1);
                        ss<<sb;
                        ss>>a;
                        ss.clear();
                        sb=s2.substr(st2,s2.size()-2-st2+1);
                        ss<<sb;
                        ss>>b;
                        ss.clear();
                        c2=Complex(a,b);
                    }
                }
                

            }
        }
        else{
            if(st==s2.size()-2){
                sb=s2.substr(0,st-1-0+1);
                ss<<sb;
                ss>>a;
                ss.clear();
                c2=Complex(a,1);
            }
            else{
                sb=s2.substr(0,st-1-0+1);
                ss<<sb;
                ss>>a;
                ss.clear();
                sb=s2.substr(st+1,s2.size()-2-(st+1)+1);
                ss<<sb;
                ss>>b;
                ss.clear();
                c2=Complex(a,b);
            }
        }
    }
    
    


    
    c3=c1*c2;
    c3.display();
    
    
    return 0;
}
