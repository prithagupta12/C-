//area of rectangle
#include<iostream>
using namespace std;
class rec{
	private:
		int l,b;
	public:
		void setarea(int l1,int b1)
		{
			l=l1;
			b=b1;
		}
		int getarea()
		{
			return l*b;
		}
};
int main()
{
	rec ob;
	ob.setarea(5,6);
	/*
	int x,y;
	cout<<"Enter the values:";
	cin>>x>>y;
	ob.setarea(x,y);*/
	cout<<"Area="<<ob.getarea();
	return 0;
}
