//using hybride inheritance impliment the flowchart
#include<iostream>
using namespace std;
class stu{
    char name[50];
	public:
		void getdata(){
			cout<<"Enter Name";
			cin>>name;
		}
};
class marks:public stu{
	protected:
	int eng,math,cs;
	float avg;
	public:
	void getmarks(){
		cout<<"Enter your marks of eng,math & cs:";
		cin>>eng>>math>>cs;
		avg=(eng+math+cs)/3;
	}
};
class eca{
	protected:
	int a;
	public:
	void getnum(){
		cout<<"Enter your extra curricular activities:";
		cin>>a;
	}
};
class result:public marks,public eca{
	
	float average;
	public:
	void avg1(){
		average=(avg+a)/2;
	}
	void show(){
		cout<<"Average="<<average;
	}
};
int main()
{
	result ob;
	ob.getdata();
	ob.getmarks();
	ob.getnum();
	ob.avg1();
	ob.show();
	return 0;
}
