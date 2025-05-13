#include<iostream>
using namespace std;
class Employee{
	int id;
	static int counter;
	public:
		void setdata()
		{
			cout<<"Enter the id:"<<endl;
			cin>>id;
			counter++;
		}
		void display(){
			cout<<"the id "<<id<<"of "<<counter<<endl;
		}
		static void getcounter(){ // static function can only access static variables
			cout<<"The value of count is "<<counter<<endl;
		}
};
int Employee::counter=5;
int main()
{
	Employee pri, epsa;
	pri.setdata();
	pri.display();
	Employee::getcounter();
	epsa.setdata();
	epsa.display();
	Employee::getcounter();
	return 0;
}
