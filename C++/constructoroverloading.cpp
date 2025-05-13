#include<iostream>
using namespace std;
class add{
	private:
	int a,b;
	public:
		add(int a1,int b1)
		{
			a=a1;
			b=b1;
			cout<<a+b<<endl;
		}
		add(float x,float y)
		{
		   // x=10;
		//	y=20;
			cout<<x+y<<endl;
		}
		add(int a1)
		{
			a=a1;
			int b=10;
			cout<<a+b<<endl;
		}
		int display()
		{
			return a+b;
		}
};
int main()
{
	add ob1(10,20);
	add ob2(20.5,20.5);
	add ob3(10);
//	ob1.display();
//	ob2.display();
//	ob3.display();
	return 0;
}
