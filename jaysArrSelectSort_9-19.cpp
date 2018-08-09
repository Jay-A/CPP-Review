// Problem:
//  Donations given by some employees (numDonations)
//  These donations stored in array in order given
//  Charity wants display :  orderReceived \t orderAscending
//     Lets have constant int NUM_DONATIONS
//     Lets have array of ints, donations
//     Lets have sorted array of pointers pointing to donations[?] in order
#include <iostream>
#include <iomanip>
#include <cstdlib> // for random because I hate entering values
#include <ctime> // to seed the random number generator with the time
using namespace std;

/*****************************************************************************
*   Function Declarations
//***************************************************************************/
void createRandomDonations(int, int []);
void displayOneArray(const int [], int);
void displayOneArray(int [], int);
void displayOneArray(int * [], int);
void displayTwoArray(int * [], int [], int);
void initializeDefaultPtrs(int * [], int [], int);
void selectionSort(int [], int);
void selectionSort(int * [], int);
// void displayTwoArray(int, int []);
/*void arraySelectSort(int, int [], int * []); */


int main()
{
  const int NUM_DONATIONS = 150;
  int donations[NUM_DONATIONS];
  int * sortArray[NUM_DONATIONS] = {nullptr};

  createRandomDonations(NUM_DONATIONS, donations);

  initializeDefaultPtrs(sortArray, donations, NUM_DONATIONS);

  selectionSort(sortArray, NUM_DONATIONS);

  displayTwoArray(sortArray, donations, NUM_DONATIONS);

  return 0;
}

void createRandomDonations(int num, int values [])
{
  srand(time(NULL));
  for (int count = 0; count < num; count++)
  {
    values[count] = (rand()%250)+1;  // max donation is $250
  }
}

void displayOneArray(const int values[], int size)
{

    cout << "\t[ " << values[0];
    for (int count = 1; count < size; count++)
    {
      cout << ", " << values[count];
      if (count%12 == 0 && count != (size-1))
      {
        cout << "\n\t";
      }
    }
    cout << " ] \n\n";
}

void displayOneArray(int values[], int size)
{

  cout << "\t[ " << values[0];
  for (int count = 1; count < size; count++)
  {
    cout << ", " << values[count];
    if (count%12 == 0 && count != (size-1))
    {
      cout << "\n\t";
    }
  }
  cout << " ] \n\n";
}

void displayOneArray(int * addresses[], int size)
{

  for (int count = 0; count < size-1; count++)
  {
    cout << "\t" << addresses[count] <<", \t" << *addresses[count] << ";\n";
  }
  cout << "\t" << addresses[size-1] << ", \t" << *addresses[size-1] << ".\n\n";
}

void displayTwoArray(int * sorted [], int unsorted [], int size)
{
  cout << "\t[ " << setw(8) << "unsorted,\t" << setw(8) << "sorted ]" << endl;
  for (int count = 0; count < size; count++)
  {
    cout << "\t[ " << setw(8) << unsorted[count] << ",\t" << setw(6) << *sorted[count] << " ]" << endl;
  }
  cout << "\n";
}

void initializeDefaultPtrs(int * sorted[], int values[],  int size)
{
  int temp;
  for (int count = 0; count < size; count++)
  {
    sorted[count] = &values[count];
  }
}

void selectionSort(int array [], int size)
{
  /* Selection sort begins by assigning the lowest value to the first index.
  /*  To do this, we define a tempPtr to be the first element, as we loop
  /*  through all elements.  This pointer will be compared to all values,
  /*  reassigning tempPtr to the index associated with the lowest value, and
  /*  then swapping. */

  int * tempPtr = nullptr;
  int * swapPtr = nullptr;
  int swapVal;

  for (int count = 0; count < size; count ++)
  {
    tempPtr = & array[count];
    swapVal = *tempPtr;
    swapPtr = & array[count];
    for (int countSwap = count; countSwap < size; countSwap++)
    {
      if (*swapPtr > array[countSwap])
      {
        swapPtr = & array[countSwap];
      }
    }
    // swap tempPtr and swapPtr
    *tempPtr = *swapPtr;
    *swapPtr = swapVal;
  }
}

void selectionSort(int * array [], int size)
{
  /* Selection sort begins by assigning the lowest value to the first index.
  /*  To do this, we define a tempPtr to be the first element, as we loop
  /*  through all elements.  This pointer will be compared to all values,
  /*  reassigning tempPtr to the index associated with the lowest value, and
  /*  then swapping. */

  int * tempPtr = nullptr;
  int * swapPtr = nullptr;
  int swapAddress;

  for (int count = 0; count < size; count ++)
  {
    tempPtr = array[count];
    swapPtr = tempPtr;
    swapAddress = count;

     for (int countSwap = count; countSwap < size; countSwap++)
    {
      if (*swapPtr > *array[countSwap])
      {
        swapPtr = array[countSwap];
        swapAddress = countSwap;
      }
    }
    // swap tempPtr and swapPtr
    array[count] = swapPtr;
    array[swapAddress] = tempPtr;
  }
}
