#include<iostream>
using namespace std;
class A{
	public:
		virtual void display(){
			cout<<"In virtual";
		}
};
class B:public A{
	public:
		void display(){
			cout<<"In display";
		}
};
int main()
{
	A *a=new B;
	a->display();
	return 0;
	
}
