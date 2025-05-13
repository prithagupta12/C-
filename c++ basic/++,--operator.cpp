#include<iostream>
using namespace std;
int main()
{
	int a=10,b;
	b=++a;
	cout<<a<<"  "<<b<<endl;
	b=a++;
	cout<<a<<"  "<<b<<endl;
	int x=10,y;
	y=--x;
	cout<<x<<"  "<<y<<endl;
	y=x--;
	cout<<x<<"  "<<y<<endl;
	return 0;
}
