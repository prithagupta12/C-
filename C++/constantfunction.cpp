#include<iostream>
using namespace std;
class test{
	int a,b;
	public:
		void read(){
			a=10;
			b=20;
		}
		void show() const{
		    cout<<"a="<<a;
		    cout<<"b="<<b;
		}
};
int main(){
	test t;
	t.read();
	t.show();
}
