#include <iostream>
using namespace std;
class Example {
   public :
   static int a;
   static int func(int b) {
      cout << "Static member function called\n";
      cout << "The value of b is: " << b;
   }
};
int Example::a=28;
int main() {
   Example obj;
   Example::func(8);
   cout << "\nThe value of the static data member a is: " << obj.a;
   return 0;
}
