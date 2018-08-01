// complete the program to ask user for character and output ascii number
#include <string>
#include <sstream>

template < typename T > std::string to_string( const T& n ) {
    std::ostringstream stm ;
    stm << n ;
    return stm.str() ;
}

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
  char letter;

  cout << "Please enter a character:  ";
  cin >> letter;
  cout << '\n';

  cout << "The ascii code associated with the character " << letter
        << " is " << static_cast<int>(letter) << ".  \n \n";

  cout << "The length of the ascii code is "
        << to_string(static_cast<int>(letter)).length() << ". ";

  return 0;
}
