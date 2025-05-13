//area of circle
#include<iostream>
using namespace std;
class cir{
	private:
		float r;
	public:
		void setarea(int r1)
		{
			r=r1;
		}
		float getarea()
		{
			return 3.14*r*r;
		}
};
int main()
{
	cir ob;
	float R;
	cout<<"Enter the radius:";
	cin>>R;
	ob.setarea(R);
	cout<<"Area="<<ob.getarea();
	return 0;
}
