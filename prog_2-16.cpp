// This program uses floating-point data types
#include <iostream>
using namespace std;

int main()
{
  float distance;
  double mass;

  distance = 1.495979E11;
  mass = 1.989E30;

  cout << "The sun is " << distance << " meters away. \n";
  cout << "This distance variable used here uses "
       << sizeof(float) << " bytes of memory. \n \n";
  cout << "The sun's mass is " << mass << " kilograms. \n";
  cout << "This mass variable used here uses "
       << sizeof(double) << " bytes of memory. \n \n";

  return 0;
}
