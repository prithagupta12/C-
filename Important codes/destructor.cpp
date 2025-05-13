#include <iostream>
 
using namespace std;
class Line {
	 private:
      double length;
   public:
      
      Line()
	    {
   	     	cout << "Object is being created" << endl;       // This is the constructor declaration
		}  
      ~Line() 
	   {
	         cout << "Object is being deleted" << endl;      // This is the destructor: declaration
		}
		
		void setLength( double len ) 
	    {
          length = len;
		}
      double getLength(  )
	   {
           return length;
       }
};

// Main function for the program
int main() {
   Line line;
 
   // set line length
   line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
 
   return 0;
}
