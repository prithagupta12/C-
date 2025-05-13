#include<iostream>
using namespace std;

class employee{
	int id;
	
	public:
		static int count;
		void setdata(){
			cout<<"Enter id:";
			cin>>id;
			count++;
		}
		void getdata(){
			cout<<"Employee id="<<id<<endl;
			cout<<"Number of Employee "<<count;
		}
};
int employee::count=0;
int main()
{
	employee ob1,ob2;
	ob1.setdata();
	ob1.getdata();
	ob2.setdata();
	ob2.getdata();
}
