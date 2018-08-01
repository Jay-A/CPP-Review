// Some stuff with pointers
#include <iostream> // for cout
using namespace std;

int main()
{
  double x = 25;
  double *ptr = &x;
  //int *ptr = nullptr;

  ptr = &x;
  //pptr = &ptr;

  cout << "The value of x is " << x << endl;
  cout << "The size of x is " << sizeof(x) << " bytes. \n";
  cout << "The address of x is " << ptr << endl;
  cout << "The size of ptr is " << sizeof(ptr) << " bytes. \n " << endl;

  return 0;
}
