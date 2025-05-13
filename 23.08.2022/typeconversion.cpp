#include<iostream>
using namespace std;
class product;
class item{
	int m,n;
	public:
		void setdata(int m1,int n1){
			m=m1;
			n=n1;
		}
		product(item i){
			a=i.m;
			b=i.n;
		}
		friend \
};
class product{
	int a,b;
	public:
		void show(){
			cout<<a<<b;
		}
};
int main(){
	product p;
	item i;
	i.setdata();
	p=i;
	p.show();
}
