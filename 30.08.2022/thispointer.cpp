//this pointer
#include<iostream>
using namespace std;
class Test{
	int a,b;
	public:
		void getdata(int a,int b){
			this->a=a;
			this->b=b;
		}
		void display(){
			cout<<"Value of a="<<a;
			cout<<"Value of b="<<b;
		}
};
int main()
{
	Test obj;
	obj.getdata(5,10);
	obj.display();
	return 0;
}
