#include<iostream>
using namespace std;

class complex{
	int a,b;
	public:
		void setnum(int n1,int n2)
		{
			a=n1;
			b=n2;
		}
		friend complex sumcomplex( complex o1,complex o2); 
		void display(){
			cout<<"The complex num is "<<a<<"+"<<b<<"i"<<endl;
		}
};
complex sumcomplex(complex c1,complex c2)
{
	complex c3;
	c3.setnum((c1.a+c2.a),(c1.b+c2.b));
	return c3;
}
int main()
{
	complex c1,c2,sum;
	c1.setnum(1,2);
	c1.display();
	c2.setnum(3,4);
	c2.display();
	sum=sumcomplex(c1,c2);
	sum.display();
	return 0;
}
