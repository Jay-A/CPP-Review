// short script to show how & returns an address
#include <iostream>   // to cout addresses
using namespace std;

int main()
{
  int x = 25;

  cout << "The address of x is " << &x << '.' << endl;
  cout << "This size of x is " << sizeof(x) << " bytes. \n";
  cout << "The value of x is " << x << ". \n";

  return 0;
}
