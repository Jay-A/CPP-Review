// This program uses two variables with the same name number.
#include <iostream>
using namespace std;

int main()
{
  // Define a variable named number
  int number;

  cout << "Enter a number greater than 0:  \n";
  cin >> number;
  if (number > 0)
  {
    int number; // A second variable named number
    cout << "Now enter another:  \n";
    cin >> number;
    cout << "\n\nThe second number is " << number << '.';
  }
  cout << "\nThe first number was " << number << '.';

  return 0;  
}
