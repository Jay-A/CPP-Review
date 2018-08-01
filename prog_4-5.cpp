// This program averages 3 test scores.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int score1, score2, score3; // The three scores
  double average;                // The average score

  // Get the three test scores
  cout << "Enter the three test scores:  \n";
  cin >> score1 >> score2 >> score3;

  // Calculate the average
  average = (score1+score2+score3)/3.0;
  cout << fixed << showpoint << setprecision(2);
  cout << "The average is " << average << '\n';

  if (average < 60)
    cout << "\nGabe says you suck! \n" ;
  else
  {
    if (average < 90)
      cout << "\nAlright I guess. \n";
    if (average >= 90)
      cout << "\nCool, that's good.\n";
  }

  return 0;
}
