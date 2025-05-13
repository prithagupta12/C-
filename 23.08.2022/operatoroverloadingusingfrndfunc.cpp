#include<iostream>
using namespace std;
class test2;
class test1{
	int a;
	public:
		void geta()
		{
			cout<<"Enter the value of a:";
			cin>>a;
		}
		friend operator > (test1,test2);
};
class test2{
	int b;
	public:
		void getb(){
			cout<<"Enter the value of b:";
			cin>>b;
		}
		friend operator>(test1 t1,test2 t2)
		{
			t1.a>t2.b?cout<<"A is big":cout<<"B is big";
		}
};
int main()
{
	test1 t1; test2 t2;
	t1.geta();t2.getb();
	t1>t2;
}

