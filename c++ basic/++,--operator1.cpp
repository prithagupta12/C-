#include<iostream>
using namespace std;
int main()
{
	/*int x=5;
	cout<<x++ + ++x +1+ --x + x--<<endl;
	cout<<x<<endl;*/
	/*int x=3;
	cout<< ++x - x++ + ++x<<endl;
	cout<<x<<endl;*/
	/*int x=1,y=2,z;
	z=x++ + y++ +x+y+ ++x + ++y;
	cout<<z<<endl;*/
	int x=10,y=20,z;
	z=x-- - x++ + --y - ++y + --x - y-- + ++x - y++;
	cout<<z;
	return 0;
}
