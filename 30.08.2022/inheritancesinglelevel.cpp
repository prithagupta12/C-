//Single level inheritance
#include<iostream>
using namespace std;
class person 
{
	char name[50];
	int id;
	public:
		void getdata(){
			cout<<"Enter the name and id:";
			cin>>name>>id;
		}
		void show()
		{
			cout<<"Name="<<name;
			cout<<"Id="<<id;
		}
};
class stu:public person{
	char course[10];
	public:
		void getstu(){
			cout<<"Enter the course:";
			cin>>course;
		}
		void showstu(){
			cout<<"course="<<course;
		}
};
int main()
{
	stu s;
	s.getdata();
	s.show();
	s.getstu();
	s.showstu();
	return 0;
}
