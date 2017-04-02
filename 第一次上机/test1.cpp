#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

class tim{
    private:
        int hh;
        int mm;
        int ss;
    public:
        tim(int hh=0,int mm=0,int ss=0):hh(hh),mm(mm),ss(ss){}
        
        int operator -(tim t);
        
        friend double max(tim a,tim b);
        friend double max(double a,tim b);
};

class date{
    private:
        int year;
        int month;
        int day;
    public:
        date(int year=0,int month=0,int day=0):year(year),month(month),day(day){}
        bool operator >(date d);
        
        friend double max(date a,date b);
        friend double max(double a,date b);
};

int tim::operator -(tim t){
    int b = (3600*this->hh+60*this->mm+this->ss)-(3600*t.hh+60*t.mm+t.ss);
    return b;
}

bool date::operator >(date d){
    if((365*this->year+30*this->month+this->day)>(365*d.year+30*d.month+d.day)){
        return 1;
    }
    else{
        return 0;
    }
}

double max(int a,int b){
    if(a>b){
        return double(a);
    }
    else{
        return double(b);
    }
}

double max(double a,int b){
    if(a>double(b)){
        return a;
    }
    else{
        return double(b);
    }
}

double max(double a,double b){
    if(a>b){
        return double(a);
    }
    else{
        return double(b);
    }
}

double max(date a,date b){
    if(a>b){
        return double(365*a.year+30*a.month+a.day);
    }
    else{
        return double(365*b.year+30*b.month+b.day);
    }
}

double max(double a,date b){
    if(a>double(365*b.year+30*b.month+b.day)){
        return a;
    }
    else{
        return double(365*b.year+30*b.month+b.day);
    }
}


double max(tim a,tim b){
    if(a-b>0){
        return double(3600*a.hh+60*a.mm+a.ss);
    }
    else{
        return double(3600*b.hh+60*b.mm+b.ss);
    }
}

double max(double a,tim b){
    if(a>3600*b.hh+60*b.mm+b.ss){
        return a;
    }
    else{
        return double(3600*b.hh+60*b.mm+b.ss);
    }
}

template <class T> double maxn(T x[],int len){
    int i;
    double a;
    for(i=1;i<len;i++){
        if(i==1){
            a=max(x[0],x[i]);
        }
        else{
            a=max(a,x[i]);
        }
        
    }

    return a;
}


int main(){
    int intArray[100];
    double douArray[100];
    tim timArray[100];
    date dateArray[100];
    
    int a1;
    int a2;
    int a3;

    double f1;
    
    double bb;

    int a;
    int i;


    cin>>a;
    while(a!=-1){
        switch(a){
            case 1:
                for(i=0;1;i++){
                    cin>>a1;
                    if(a1==0){
                        bb=maxn(intArray,i); 
                        cout<<int(bb)<<endl;
                        cin>>a;
                        break;
                    }
                    else{
                       intArray[i]=a1; 
                    }
                }
                break;

            case 2:
                i=0;
                while(1){
                    cin>>f1;
                    if(f1==double(0)){
                        bb=maxn(douArray,i);
                        cout<<double(bb)<<endl;
                        cin>>a;
                        break;
                    }
                    else{
                        douArray[i]=f1;
                        i++;
                    }
                    
                }
                break;

            case 3:
                i=0;
                while(1){
                    cin>>a1;
                    if(a1==0){
                       bb=maxn(timArray,i);
                       a1=int(bb);
                       cout<<a1/3600<<" ";
                       a1=a1%3600;
                       cout<<a1/60<<" ";
                       a1=a1%60;
                       cout<<a1<<endl;
                       cin>>a;
                       break;
                    }
                    else{
                        cin>>a2>>a3;
                        timArray[i]=tim(a1,a2,a3);
                        i++;
                    }
                    
                }

                break;

            case 4:
                i=0;
                while(1){
                    cin>>a1;
                    if(a1==0){
                        bb=maxn(dateArray,i);
                        a1=int(bb);
                        cout<<a1/365<<" ";
                        a1=a1%365;
                        cout<<a1/30<<" ";
                        a1=a1%30;
                        cout<<a1<<endl;
                        cin>>a;
                        break;
                    }
                    else{
                        cin>>a2>>a3;
                        dateArray[i]=date(a1,a2,a3);
                        i++;
                    }
                    
                }
                break;

            default:
                cin>>a;
                break;
        }
    }


    return 0;
}
