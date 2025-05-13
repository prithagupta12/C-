#include<iostream>
using namespace std;
class Add{
	
	public:
		void add(int a,int b)
		{
			cout<<a+b<<endl;
		}
		void add(int a1)
		{
			cout<<a1<<endl;
		}
		void add(int x,int y, int z)
		{
			cout<<x*y*z<<endl;
		}
};
int main()
{
	Add ob;
	ob.add(9);
	ob.add(2,3);
	ob.add(3,3,4);
	return 0;
}
