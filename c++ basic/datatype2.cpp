#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;
int main()
{
	float x=3456.123109654f;
	double a=9.12345678901234567890;
	long double aa=999.12345678901234567890123456789L;
	cout<<setprecision(7);
	cout<<"double a="<<a<<endl;
	cout<<"long double aa="<<aa<<endl;
	cout<<"float x="<<x<<endl;
	cout<<numeric_limits<long double>::digits10<<endl;
	cout<<numeric_limits<double>::digits10<<endl;
	cout<<numeric_limits<float>::digits10<<endl;
	cout<<setprecision(9)<<"float x="<<x<<endl;
	cout<<setprecision(20)<<"long double aa="<<aa<<endl;
	cout<<setprecision(18)<<"double a="<<a<<endl;
	return 0;
}
