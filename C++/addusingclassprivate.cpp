#include<iostream>
using namespace std;
class sum{
	private:
		int a,b;
	public:
		void setsum(int a1,int b1)
		{
			a=a1;
			b=b1;
		}
		int getsum()
		{
			return a+b;
		}
};
int main()
{
	sum ob;
	ob.setsum(5,6);
	cout<<"Sum="<<ob.getsum();
}
