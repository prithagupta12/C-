#include<iostream>
using namespace std;
class Emp{
	int id;
	static int count;
	public:
		void setdata(){
			cout<<"Enter id:";
			cin>>id;
		}
		void getdata(){
			cout<<"Emp id="<<id;
			cout<<"Emp number="<<count++;
		}
};
int Emp::count=30;
int main(){
	Emp A,B;
	A.setdata();
	B.setdata();
	A.getdata();
	B.getdata();
	return 0;
}
