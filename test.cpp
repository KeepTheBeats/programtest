#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <stack>

using namespace std;


int main(){
	stack<int> a;
	a.push(2);
	a.push(3);
	cout<<a.top()<<endl;
	a.top() = a.top() + 1;
	cout<<a.top()<<endl;
	int b;
	b = a.top();
	cout<<b<<endl;
	cout<<a.empty()<<endl;
	cout<<a.size()<<endl;
	a.pop();
	cout<<a.top()<<endl;

    return 0;
}
