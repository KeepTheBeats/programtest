#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

typedef struct student{
    string name;
    double gpa;
    student *next;
}student;

int main(){
    string a;
    double b;

    student *p;
    student *q;
    p=NULL;
    q=NULL;

    cin>>a;
    if(a!="-1"){
        cin>>b;
        p=new student;
        q=p;
        q->name=a;
        q->gpa=b;
        q->next=NULL;
        while(cin>>a,a!="-1"){
            cin>>b;
            q->next=new student;
            q=q->next;
            q->name=a;
            q->gpa=b;
            q->next=NULL;
        }
    }
    
    student *i;
    student *j;
    if(p!=NULL){

        
        int i1;
        double s1;
        s1=0;
        i1=0;

        i=p;
        while(i!=NULL){
            s1=s1+i->gpa;
            i1++;
            i=i->next;
        }

        double pj;
        pj=s1/i1;

        while(p->gpa<pj){
            p=p->next;
            if(p==NULL){
                break;
            }
        }
        if(p!=NULL){
            i=p;
            j=p->next;
            while(j!=NULL){
                if(j->gpa<pj){
                    if(j==q){
                        q=i;
                    }
                    i->next=j->next;
                    j=i->next;

                }
                else{
                    i=i->next;
                    j=j->next;
                }
            }
        }


        for(i=p;i!=NULL;i=i->next){
            cout<<i->name<<endl;
        }

    }








    return 0;
}
