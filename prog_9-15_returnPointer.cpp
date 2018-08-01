// This program is meant to demonstrate the return of a pointer by a function
// A time clock seeded random integer array of user defined size
#include <iostream> // cout and cin
#include <cstdlib>  // rand() and srand()
#include <ctime>    // time()
using namespace std;

int * getRandomValues(int);
void displayArray(int [], int);

int main()
{
  int * numbers = nullptr;  // a nullpointer for creating dynamic array of ints
  int numVals;

  // ask user for number of random values
  cout << "\nHow many random integers do you want? \n";
  cin >> numVals;

  // Get random values
  numbers = getRandomValues(numVals);

  // Display the values as a vector
  displayArray(numbers, numVals);

  // Don't forget the free the dynamically allocated memory and reset to nullptr
  delete [] numbers;
  numbers = nullptr;

  return 0;
}

int * getRandomValues(int num)
{
  int * tempArray = nullptr;  // This will hold the numbers

  // Return a nullptr if num == 0
  if ( num <= 0 )
    { return tempArray; }

  // Dynamically allocate the array
  tempArray = new int[num];

  // Seed the random number generator by passing
  // the return value of time(0) to srand.
  srand(time(0));
  for (int count = 0; count < num; count++)
  {
    tempArray[count] = (rand() + 1)%100;  // random number between 1 and 100
  }

  // return the pointer to the array
  return tempArray;
}

// displayArray does exactly that, it displays the elements of vals in vector
//   format.
void displayArray(int vals[], int num)
{
  cout << "\t[ " << vals[0];  // one tab in open vector [ and list first element
  for (int count = 1; count < num ; count ++)  // loop through remaining vals
  {
    if (count%15 == 0)        // break display nicely if NUM is too large
      cout << "\n\t";
    cout << ", " << vals[count];  // display the comma separated values.
  }
  cout << " ]\n";   // end with closed vector and endline.
}
