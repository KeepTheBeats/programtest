#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> a;
    vector<int>::iterator it;
    a.push_back(1);
    a.push_back(2);
    cout<<a.capacity()<<endl<<a.back()<<endl<<a.front()<<endl<<a.at(1)<<endl<<a.at(0)<<endl<<a[1]<<endl<<a[0]<<endl;
    return 0;
}
