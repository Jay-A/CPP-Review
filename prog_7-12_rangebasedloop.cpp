// the program uses a range-based for loop to
// modify the entries of an array
#include <iostream>
using namespace std;

int main()
{
  const int SIZE = 5;
  int numbers [SIZE];

  // get values for the integer array:
  for (int &val : numbers)  // only in C++ 11 or better?
  {
    cout << "Enter an integer value:  " ;
    cin >> val;
  }

  // Display the elements of the array
  cout << "\n\t[ ";
  for (int val : numbers) // only in C++ 11 or better?
  {
    cout << val << ' ';
  }
  cout << "]";

  return 0;
}
