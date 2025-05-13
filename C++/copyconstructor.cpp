//copy constructor
#include<iostream>
using namespace std;
class employee{
	public:
		employee(){
			cout<<"In default constructor"<<endl;
		}
};
int main()
{
	employee ob1;
	employee ob2;
	employee ob3;
	return 0;
}
