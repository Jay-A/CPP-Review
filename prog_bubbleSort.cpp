// Try to write a bubble sort algorithm
#include <iostream>
#include <cstdlib>
using namespace std;

const int N = 10;
void bubbleSwap(int & , int & );

int main()
{
  // create an array of some random integers
  int numbers [N];
  for (int count = 0; count < N; count++)
  {
    numbers[count] = (rand()+1)%100;
  }

  cout << "The unsorted elements are: " << endl << "\t";
  for (int val : numbers)
    cout << val << " ";
  cout << endl;

  int stopper = N-1;
  while(stopper >1)
  {
    for (int count1 = 0; count1<stopper; count1 = count1 +1 )
    {
      if ( numbers[count1] > numbers[count1+1])
      {
        bubbleSwap(numbers[count1], numbers[count1+1]);
      }
    }
    stopper --;
  }

  cout << "The sorted values are: " << endl << "\t";
  for (int val : numbers)
    {
      cout << val << " ";
    }
  cout << endl;
  return 0;
}

void bubbleSwap(int& a, int& b)
{
  int temp = a;
  a = b;
  b = temp;
}
