#include<iostream>
using namespace std;
class Shop{
	int itemid[100];
	int itemprice[100];
	int counter;
	public:
		void initcounter(){
			counter=0;
		}
		void setdata();
		void display();
};
void Shop::setdata(){
	cout<<"Enter the id and price:"<<endl;
	cin>>itemid[counter]>>itemprice[counter];
	counter++;
}
void Shop::display(){
	for(int i=0;i<counter;i++)
	cout<<"The id is "<<itemid[i]<<" and price is "<<itemprice[i]<<endl;
}
int main()
{
	Shop dukaan;
	dukaan.initcounter();
	for(int i=0;i<3;i++)
	dukaan.setdata();
	dukaan.display();
	return 0;
}
