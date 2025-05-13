#include<iostream>
using namespace std;
class sum{
	private:
		int a,b;
	public:
		void setsum(int a1,int b1){
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
	int x,y;
	cout<<"Enter the values:";
	cin>>x>>y;
	ob.setsum(x,y);
	cout<<"Sum="<<ob.getsum();
}

