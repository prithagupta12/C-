//Ambiguity resolution or multiple level
#include<iostream>
using namespace std;
class a{public:
	void display(){
		cout<<"In class A\n";
	}
};
class b{public:
	void display(){
		cout<<"In class b\n";
	}
};
class c:public a,public b{
	void display(){
		cout<<"In class c\n";
	}
};
int main()
{
	c ob;
	ob.a::display();
	ob.b::display();
}
