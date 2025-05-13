//not running
#include<iostream>
using namespace std;
class construct{
	private:
		float area;
	public:
		construct(){
			area=0;
		}
		construct(int a,int b)
		{
			area=a*b;
		}
		void display(){
		cout<<area<<endl;
		}
};
int main(){
	construct ob1();
	construct ob2(5,10);
	ob1.display();
	ob2.display();
	return 0;
}
