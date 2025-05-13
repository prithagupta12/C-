#include<iostream>
using namespace std;
class A{
	private:
		char name[50];
		int roll;
	public:
		void getdata()
		{
			cout<<"Enter Name:"<<endl;
			cin>>name;
			cout<<"Enter Roll:"<<endl;
			cin>>roll;
		}
		void showdata(){
			cout<<name<<endl;
			cout<<roll;
		}
};
class CSE:public virtual A{
	public:
		int math,DS;
		int CT(){
			cout<<"Enter the marks of math and DS"<<endl;
			cin>>math>>DS;
		}
};
class IT:public virtual A{
	public:
		int math1,DS1;
		
	int ITT(){
		cout<<"Enter the marks of math1 and DS1"<<endl;
		cin>>math1>>DS1;
	}
};
class ECE:public virtual A{
	public:
		int math2,DS2;
		
	int ET(){
		cout<<"Enter the marks of math2 and DS2"<<endl;
		cin>>math2>>DS2;
	}
};
class total:public CSE,public IT,public ECE{
	public:
		int result(){
			cout<<"Total="<<math+DS+math1+DS1+math2+DS2;
		}
};
int main()
{
    total ob;
	ob.getdata();
	ob.showdata();
	ob.CT();
	ob.getdata();
	ob.showdata();
	ob.ET();
	ob.getdata();
	ob.showdata();
	ob.ITT();
	//cout<<"Total marks of all stream student:"<<endl;
	ob.result();
	return 0;
}
