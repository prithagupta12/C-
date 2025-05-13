#include<iostream>
using namespace std;
class product{
	private:
		int a,b;
	public:
		void setproduct(int a1,int b1)
		{
			a=a1;
			b=b1;
		}
		int getproduct()
		{
			return a*b;
		}
};
int main()
{
	product ob;
	int x,y;
	cout<<"Enter the values";
	cin>>x>>y;
	ob.setproduct(x,y);
	/* ob.setsum(5,4);*/
	cout<<"Product="<<ob.getproduct();
	return 0;
}
