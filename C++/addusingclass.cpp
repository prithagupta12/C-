#include<iostream>
using namespace std;
class sum{
	public:
		int a,b;
		int getsum(int a,int b)
		{
			return a+b;
		}
};
int main()
{
	sum ob;
	cout<<"sum="<<ob.getsum(2,3);
	return 0;
}

