/*
  This program calculates the area of a circle
  Of particular interest here is the use of cmath
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  const double pi = M_PI;

  double area, radius;

  cout << "This program calculates the area of a circle. \n";
  cout << "What is the radius of the circle? \n";
  cin >> radius;
  cout << '\n';
  area = 2*pi*pow(radius, 2.0);
  cout << "The area of the circle is " << area << " units squared. \n";

  return 0;
}
