#include<iostream>
using namespace std;
class bank_account{
	public:
		char name[50];
		int acc_num;
		char acc_type[50];
		int balance;
		
	void assign_values(){
		cout<<"Enter the name of the depositor:"<<endl;
		cin>>name;
		cout<<"Enter the account number:"<<endl;
		cin>>acc_num;
		cout<<"Enter the account type:"<<endl;
		cin>>acc_type;
		cout<<"Enter the initial balance:"<<endl;
		cin>>balance;
	}
	void deposite_amount(){
		int a;
		cout<<"Enter the amount you want to deposit:"<<endl;
		cin>>a;
	    balance=balance+a;
		cout<<"Total amount after deposit: "<<balance<<endl;
	}
	void withdraw(){
		int b;
		cout<<"The current balance is"<<balance<<endl;
		cout<<"Enter the amount you want to withdraw:"<<endl;
		cin>>b;
		if(b>balance)
		{
			cout<<"Withdrawal unsuccessful"<<endl;
		}
		else
		{
			cout<<"withdrawal successful"<<endl;
			balance=(balance-b);
			cout<<"Your current balance is "<<balance<<endl;
		}	
	}
	void display(){
		cout<<"Name:"<<name<<endl;
		cout<<"Current balance:"<<balance<<endl;
	}	
};
int main()
{
	bank_account ob;
	ob.assign_values();
	int a;
	while(1){
	
	cout<<"Enter your choose 1.To assign initial values\n2.To deposit the amount\n3.To withdraw an amount after checking the balance\n4.To display name and balance\n";
	cin>>a;
	switch(a)
	{
		case 1:{
			ob.assign_values();
			ob.display();
			break;
		}
		case 2:{
			ob.deposite_amount();
			break;
		}
		case 3:{
			ob.withdraw();
			break;
		}
		case 4:{
			ob.display();
			break;
		}
		default:{
			cout<<"Enter correct choose:";
			break;
		}
			
	}
}
	return 0;
}
