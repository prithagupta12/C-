#include<iostream>
using std::cout;
using std::endl;
#define pi 3.1415
int r=2;
int area();
class Myclass{
	public:
		int a;
		void display()
		{
			cout<<"In my class";
		}
};
int main()
{
	Myclass m;
	m.a=90;
	m.display();
	cout<<endl;
	area();
	cout<<endl<<"HeHe"<<endl;
	cout<<m.a<<endl;
	return 0;
}
int area()
{
	float ar;
	ar=pi*r*r;
	cout<<ar;
}
