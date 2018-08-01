// Demo of an indirection operator.  An indirection operator allows you to work
//    with the actual value at the address of the pointer.
#include <iostream>  // for cout
#include <cstdlib>  // for rand
using namespace std;

int main()
{
  double x = (rand() + 1) % 100;  // a random number between 1 and 100
  double *ptr = nullptr; // a pointer for double initialized to null pointer

  ptr = &x;  // now ptr points to x

  cout << "The value of x is " << x << ".  \n";
  cout << "The address of x is " << ptr << ". \n";
  cout << "By use of indirection operator, ptr points to the value " << *ptr
    << ". \n";

  cout << "\nBut we may write over x indirectly by assigning \n";
  cout << "random integer to *ptr. \n";

  *ptr = (rand() + 1) % 100;
  cout << "\nThe new value of x is " << x << ". \n";
  cout << "But, ptr still has the address for x " << ptr << ". \n";
  
  return 0;
}
