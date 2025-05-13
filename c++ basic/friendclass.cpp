#include<iostream>
using namespace std;
class complex;
class Calculator{
	
	public:
		int sum(int a,int b){
		return a+b;
	}
	int addrealcomplex(complex,complex);
	int addcompcomplex(complex,complex);
	friend class complex;
};
class complex{
	int a,b;
	friend class Calculator;
	public:
		void setnum(int n1,int n2)
		{
			a=n1;
			b=n2;
		}
		void printnum()
		{
			cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
		}
};
int Calculator::addrealcomplex(complex o1,complex o2)
{
	return (o1.a+o2.a);
}
int Calculator::addcompcomplex(complex o1,complex o2)
{
	return (o1.b+o2.b);
}
int main(){
	complex o1,o2;
	o1.setnum(1,4);
	o1.printnum();
	o2.setnum(5,7);
	o2.printnum();
	Calculator calc;
	int res=calc.addrealcomplex(o1,o2);
	cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
	int resc=calc.addcompcomplex(o1,o2);
	cout<<"The sum of complex part of o1 and o2 is "<<resc<<endl;
    cout<<res<<"+"<<resc<<"i"<<endl;
	return 0;
}
