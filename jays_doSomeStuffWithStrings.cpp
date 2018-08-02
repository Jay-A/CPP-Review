// I'm going to try to write some random strings to a file in the
//   FILES directory, and then read the file in to display the random
//    crap that has been written there.
#include <iostream>  // for cout cin
#include <iomanip>   // maybe not necessary
#include <cstdlib>   // for random stuff
#include <fstream>   // to create, write to, and access a FILES
using namespace std;

/*****************************************************************************
Function Declarations
//****************************************************************************/



int main()
{
  int stringLength = -1;  // this will be the length of the random strings

  do{
    cout << " Please enter the length of the lines (5-15):  ";
    cin >> stringLength;  //
  } while (stringLength <= 0 || stringLength > 15);

  return 0;

}
