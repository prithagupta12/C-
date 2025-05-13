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
	student ob;
	ob.name="Ram";
	ob.dept="CSE";
	ob.roll=1;
	cout<<"Name="<<ob.name<<endl;
	cout<<"Dept="<<ob.dept<<endl;
	cout<<"Roll="<<ob.roll<<endl;
	return 0;
}

