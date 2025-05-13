#include<iostream>
using namespace std;
class shape{
	public:
		virtual void area()=0;//pure virtual function
};
class circle:public shape{
	public:
		int r;
		void area(){
			cout<<"Enter r:"<<endl;
			cin>>r;
			cout<<"The circle area is area="<<(3.14*r*r)<<endl;
		}
};
class sqr:public shape{
	public:
		int a;
		void area()
		{
			cout<<"Enter value of a:"<<endl;
			cin>>a;
			
			cout<<"area of sqr="<<(a*a);
		}
};
int main()
{
	shape *a=new circle;
	a->area();
	shape *d=new sqr;
	d->area();
	return 0;
}
