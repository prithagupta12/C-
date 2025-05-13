#include<iostream>
#include<string.h>
using namespace std;
class student
{
	public:
		string name;
		int roll;
		string dept;
};
int main()
{
	student ob1,ob2;
	cout<<"Enter the name:\n";
	cin>>ob1.name;
	cout<<"Enter the Dept:\n";
	cin>>ob1.dept;
	cout<<"Enter the roll:\n";
	cin>>ob1.roll;
	cout<<"Enter name:\n";
	cin>>ob2.name;
	cout<<"Enter the Dept:\n";
	cin>>ob2.dept;
	cout<<"Enter the roll num:\n";
	cin>>ob2.roll;
	
	cout<<"Details of 1st student:\n";
	cout<<"Name="<<ob1.name<<endl;
	cout<<"Dept="<<ob1.dept<<endl;
	cout<<"Roll="<<ob1.roll<<endl;
	cout<<"Details of 2nd student:\n";
	cout<<"Name="<<ob2.name<<endl;
	cout<<"Dept="<<ob2.dept<<endl;
	cout<<"Roll="<<ob2.roll<<endl;
	return 0;
}

