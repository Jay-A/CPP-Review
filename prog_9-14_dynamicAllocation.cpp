// This program demonstrates the dynamic allocation of an array.
// This program totals and averages the sales amounts for any number of days.
// The amounts are stored in a dynamically allocated array.
#include <iostream>   // for cout and cin
#include <iomanip>    // for fixed, showpoint, and setprecision
using namespace std;

int main()
{
  double * sales = nullptr,  // nullptr to dynamically allocate arrays
    total = 0.0,             // initialize accumulator to zero
    average;                // the average sales

  int numDays,  // To hold the number of days of sales
    count;    // this is a counter variable

  // Get the number of days of sales
  cout << "How many days of sales amounts do you want to process? \n";
  cin >> numDays;

  // Dynamically allocate an array large enough to hold that many days of sales
  //   amounts.
  sales = new double[numDays];

  // Get the sales amount for each day.
  cout << "Enter the sales amounts below. \n";
  for (count = 0; count < numDays; count++)
  {
    cout << "Day " << (count + 1) << ":  ";
    cin >> sales[count];
  }

  // Calculate the total sales
  for (count = 0; count < numDays; count++)
  {
    total += sales[count];
  }

  // Calculate the average sales per days
  average = total / numDays;

  // Display the results
  cout << fixed << showpoint << setprecision(2);
  cout << "\n\nTotal Sales:  $" << total << endl;
  cout << "Average Sales:  $" << average << endl;

  // Do not create dynamically allocated data without deleting it
  delete [] sales;  // delete [] is needed when dynamically allocated array
  sales = nullptr;  // sales was originally a nullptr.

  return 0;
}
