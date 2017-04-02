#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

class polygon{
    protected:
        int number;
    private:
        int side_length[100];
    public:
        polygon(){
            number=0;
            for(int i=0;i<100;i++){
                side_length[i]=0;
            }
        }
        void add(int a){
            side_length[number]=a;
            number++;
        }
        int perimeter(){
            int s;
            s=0;
            for(int i=0;i<number;i++){
                s=s+side_length[i];

            }
            return s;
        }
        void display(){
            cout<<number<<" "<<perimeter()<<endl;
        }

};

class rectangle : public polygon{
    private:
        int height;
        int width;
    public:
        rectangle(int h=0,int w=0):height(h),width(w){
            number=4;
        }
        int perimeter(){
            return (height*2+width*2);
        }
        void display(){
            cout<<number<<" "<<perimeter()<<endl;
        }
};

class equal_polygon : public polygon{
    private:
        int side_len;
    public:
        equal_polygon(int num=0,int sl=0):side_len(sl){
            number = num;
        }
        int perimeter(){
            return (side_len*number);
        }
        void display(){
            cout<<number<<" "<<perimeter()<<endl;
        }
};

int main(){
    int n;
    cin>>n;
    int i;
    int a;
    int b;
    int c;

    for(i=0;i<n;i++){
        cin>>a;
        /*switch(a){
            case 0:
                polygon p;
                while(cin>>b,b!=-1){
                    p.add(b);
                }
                p.display();

                break;

            case 1:
                cin>>b>>c;
                rectangle r(b,c);
                r.display();
                break;

            case 2:
                cin>>b>>c;
                equal_polygon ep(b,c);
                ep.display();
                break;

            default:

                break;
        }*/
		if(a==0){
			polygon p;
            while(cin>>b,b!=-1){
                p.add(b);
            }
            p.display();
		}
		else if(a==1){
			cin>>b>>c;
            rectangle r(b,c);
            r.display();
		}
		else if(a==2){
			cin>>b>>c;
            equal_polygon ep(b,c);
            ep.display();
		}
    }
    return 0;
}
