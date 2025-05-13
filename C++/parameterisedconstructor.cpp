//parameterise constructor
#include<iostream>
using namespace std;
class rec{
	private:
	int l,b;
	public:
	 rec(int l1,int b1)
		{
			l=l1;
			b=b1;
		}
	int area()
	{
		return l*b;
	}
	
};
int main()
{
	/*rec ob;
	rec obj;*/
	rec ob(5,6);
	rec obj(2,3);
	cout<<"Area of ob"<<ob.area();
	cout<<"Area of obj"<<obj.area();
	return 0;
}
