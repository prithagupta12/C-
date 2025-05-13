//duplicacy resolution
#include<iostream>
using namespace std;
class a{public:
	void displayA(){
		cout<<"In class a\n";
	}
};
class b:public virtual a{
	public:
		void displayB()
		{
			cout<<"In class b\n";
		}
};
class c:public virtual a{
	public:
		void displayC(){
			cout<<"In class c\n";
		}
};
class d:public b,public c{
	public:
		void displayD(){
			cout<<"In class d\n";
		}
};
int main()
{
	d ob;
	ob.displayA();
	ob.displayB();
	ob.displayC();
	ob.displayD();
	return 0;
}
