#include <iostream>
using namespace std;

class abc{
  public: 
  static int x, y; // static data member

  static void print() {
    // A hidden parameter is passed as this
    cout << "x = " << x << " y = " << y << endl;// this->x , this->y
  }
  
};
//It needs to be initialized outside the class
int abc::x;
int abc::y;
int main() {

  abc a;
  abc b ;
  a.print(); // Printing initial value 0 0
  
  a.x = 10; //Changing values
  abc::x = 70; //Can be written as abc::x = 70;
  
  a.y = 20; //Changing values
  a.print(); // Printing new values 10 20
  
  b.x = 30;  //Changing values
  b.y = 40; //Changing values
  
  // a.print(); // Printing new values 30 40
  
  a.x = 50;  //Changing values
  b.print(); // Printing new values 50 40



  //When we make a static member function, we can access the static data member without an object.
  
  //the static variables can also be accessed using the class name only.

  abc::print();
  abc::x = 60;
  abc::print();
  abc::y = 70;
  abc::print();
  
  return 0;
}

