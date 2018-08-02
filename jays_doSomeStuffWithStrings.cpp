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
void createString(int, char *);

int main()
{
  int stringLength = -1;  // this will be the length of the random strings
  int numLines = -1;  // this will be the number of random strings to write
  int rowCount = 0;
  char * aString = nullptr; // this is for dynamically allocating a string
  char tempChar;
  ofstream outStrings;  // ultimately same as in, but for writing strings out
  ifstream inStrings;   // the will be the file for reading strings back in

  // Create the output file:
  outStrings.open("./FILES/tempStrings.txt");

  do{   // This loop will only exit when the user has entered an int from 1-75
    cout << " Please enter the length of the lines (5-75):  ";
    cin >> stringLength;  //
  } while (stringLength < 5 || stringLength > 75);

  do{
    cout << " Please enter the number of line desired (1-1000):  ";
    cin >> numLines;
  } while (numLines < 1 || numLines >1000 );

  cout << "\n" << numLines << " lines of " << stringLength;
  cout << " characters will be generated.\n";

  for (int count = 0; count < numLines; count++)
  {
    aString = new char [stringLength];
    createString(stringLength, aString);
    for (int count1 = 0; count1 < stringLength; count1++)
    {
      outStrings << aString[count1];
    }
    outStrings << "\n";
    delete [] aString;
    aString = nullptr;
  }
  outStrings.close();
  inStrings.open("./FILES/tempStrings.txt");

  do {
    inStrings.get(tempChar);
    cout << tempChar;
    if (tempChar == '\n')
      rowCount++;
  } while (rowCount < numLines);
  return 0;
}

void createString(int num, char *newString)
{
  for (int count = 0; count < num; count++)
  {
    // newString[count] = (rand() % (132-101))+102;
    newString[count] = (rand() % (124-97))+96;
    if (newString[count] == 96)
    {
      newString[count] = 32;
    }
  }
}
