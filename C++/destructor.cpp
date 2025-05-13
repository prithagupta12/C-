#include<iostream>
using namespace std;
class sample{
	int a,b;
	public:
		sample(){
			a=10;
			b=20;
		}
		
		~sample(){
			cout<<"Destructor is called"<<endl;
			cout<<"a="<<a<<"b="<<b;
		}
};
int main()
{
	sample ob;
}
