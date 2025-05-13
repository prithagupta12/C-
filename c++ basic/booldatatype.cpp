#include<iostream>
using namespace std;
int main()
{
	bool a=true,b=false;
	cout<<a<<"  "<<b<<endl;
	int x=10,y=12;
	if((x>y)==true)
	{
		cout<<"x is greater"<<endl;
	}
	else
	{
		cout<<"y is greater"<<endl;
	}
	int z=x+y+true+false;
	cout<<"z="<<z<<endl;
	bool v=12;
	cout<<v<<endl;
	cout<<"sizeof bool="<<sizeof(bool)<<endl;
	return 0;
}
