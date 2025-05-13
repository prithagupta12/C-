//multi-level inheritance
#include<iostream>
using namespace std;
class grandparent{
	public:
		void grandfun(){
			cout<<"In grandparent class\n";
		}
};
class parent:public grandparent{
	public:
		void parentfun(){
			cout<<"In parent class\n";
		}
};
class myclass:public parent{
	public:
		void myfun(){
			cout<<"In my class\n";
		}
};

int main()
{
	myclass m;
	m.grandfun();
	m.parentfun();
	m.myfun();
}
