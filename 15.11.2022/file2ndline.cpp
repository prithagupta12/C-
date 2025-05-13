#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream myfile;
	myfile.open("file1.txt",ios::app);
	if(myfile.is_open()){
		myfile<<"This is my second line"<<endl;
	}
}
