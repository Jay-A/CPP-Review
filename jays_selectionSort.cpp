// This is meant to be a selection sort function
//  it will create a random array of the global const int NUM values
//  between 1 and 100.  This will be displayed, then sorted, and then
//  displayed again.
#include <iostream>   // for cin and cout
#include <iomanip>    // for possibly fixing width for cout values
#include <cstdlib>    // to create random values
using namespace std;

// Define the length of the random integer array
const int NUM = 30;

// Declarations of functions
void displayArray(int []);
void swap(int &, int &);
void selectionSort(int []);

/*****************************************************************************/
/*  Main Function:                                                           */
/*****************************************************************************/

int main()
{
  int values [NUM];
  // create the random values
  for (int count = 0; count < NUM; count++)
  {
    values[count] = (rand()+1)%100;
  }
  cout << "\nThis is the unsorted array:  \n" ;
  displayArray(values);

  selectionSort(values);

  // display the sorted array
  cout << "\n The sorted array is:  \n";
  displayArray(values);
}

/*****************************************************************************/
/*  Function Definitions:                                                    */
/*****************************************************************************/

// selectionSort is a function that does a selection sorted
void selectionSort(int values[])
{
  // This is the selection sort script, because I cannot figure out how to edit
  // an array from function call.... pointers come later
  int minValInd;      // this is the index in the array for the minimum val

  // starting at countMin = 1, initialize minValInd to countMin -1,
  //  test values[minValInd] < values[count], if false replace
  //  minValInd with count and continue.
  for (int countMin = 1; countMin < NUM; countMin++)
  {
    minValInd = countMin - 1;

    for (int countComp = countMin; countComp < NUM; countComp++)
    {
      if(values[countComp] < values[minValInd])
      {
        minValInd = countComp;
      }
    }

    // swap values[countMin-1] and values[minValInd]
    swap(values[countMin-1], values[minValInd]);
  }
}

// displayArray does exactly that, it displays the elements of vals in vector
//   format.
void displayArray(int vals[])
{
  cout << "\t[ " << vals[0];  // one tab in open vector [ and list first element
  for (int count = 1; count < NUM ; count ++)  // loop through remaining vals
  {
    if (count%15 == 0)        // break display nicely if NUM is too large
      cout << "\n\t";
    cout << ", " << vals[count];  // display the comma separated values.
  }
  cout << " ]\n";   // end with closed vector and endline.
}

// swap swaps two integer values.
void swap(int & num1, int & num2)
{
  int temp = num1;
  num1 = num2;
  num2 = temp;
}
