#include<iostream>
using namespace std;
class Base1{
public:
void greet(){
cout<<"Good Morning!!";
}
};
class Base2{
public:
void greet1(){
cout<<"\n\nHow are you?";
}
};
class Derived:public Base1, public Base2{
int a;
};
int main(){
Derived d;
d.greet();
d.greet1();
}

