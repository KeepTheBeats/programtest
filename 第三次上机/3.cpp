#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

class Date{
protected:
	int year;
	int month;
	int day;
public:
    Date():year(0),month(0),day(0){
    }
	Date(int y,int m,int d):year(y),month(m),day(d){}
};
class Time{
protected:
	int hour;
	int minute;
	int second;
public:
    Time(){
        hour=0;
        minute=0;
        second=0;
    }
	Time(int h,int m,int s):hour(h),minute(m),second(s){}

};


class Schedule:public Date,public Time{
private:
	int ID;
	int sum;
public:
    Schedule(){
        ID=0;
		sum=second+60*minute+60*60*hour+60*60*24*day+60*60*24*30*month+60*60*24*30*12*year;
    }
	Schedule(int y,int m,int d,int h,int mi,int s,int i):Date(y,m,d),Time(h,mi,s),ID(i){
		sum=second+60*minute+60*60*hour+60*60*24*day+60*60*24*30*month+60*60*24*30*12*year;
	}
	bool operator < (const Schedule & s2){
		if(s2.sum-sum>0){
			return true;
		}
		else{
			return false;
		}
	}
	void show(){
		cout<<"No."<<ID<<": "<<year<<"/"<<month<<"/"<<day<<" "<<hour<<":"<<minute<<":"<<second<<endl;
	}
};

int main(){
	int a;
	int y;
	int m;
	int d;
	int h;
	int mi;
	int s;
	
    Schedule s1;
	cin>>a;
	if(a!=0){
		//scanf("%d/%d/%d %d:%d:%d",&y,&m,&d,&h,&mi,&s);
        scanf("%d/%d/%d",&y,&m,&d);
        scanf("%d:%d:%d",&h,&mi,&s);
	    Schedule s2(y,m,d,h,mi,s,a);
	    s1=s2;
		while(cin>>a,a!=0){
		    scanf("%d/%d/%d %d:%d:%d",&y,&m,&d,&h,&mi,&s);
			Schedule s2(y,m,d,h,mi,s,a);
			if(s2 < s1){
				s1=s2;
			}
		}
	}
		
	cout<<"The urgent schedule is ";
	s1.show();
		
	
	return 0;
}
