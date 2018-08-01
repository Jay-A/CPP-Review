// This program integrates the function thisFunc defined in declarations
// section, using the Trapezoid Rule
#include <iomanip>
#include <iostream>
using namespace std;

double pow(double, int);

double thisFunc(double x)
{
  double z;
  z = (1/3.0) * pow(x,3.0) + x+1;
  return z;
}

int main()
{
  int numPts = 8;
  double integral = 0;
  double wts [numPts];
  double evalPts [numPts];
  double evals [numPts];
  double delx = 2.0/(numPts-1);

  // set display precision for doubles
  cout << setprecision(2);

  // Define the weights of the trapezoid rule wts
  wts[0] = 1;
  wts[(numPts-1)] = 1;
  for(int count = 1; count < numPts-1; count = count + 1)
  {
    wts[count] = 2;
  }

  cout << "The weights are \n\t[" << wts[0];
  for(int count = 1; count < numPts; count = count +1)
  {
    cout <<  ", " << wts[count];
  }
  cout << "].\n";

  // Define the Evaluation points evalPts
  evalPts[0] = -1;
  for(int count = 1; count < numPts; count = count + 1)
  {
    evalPts[count] = evalPts[count-1] + delx;
  }

  cout << "The evaluation points are \n\t[" << evalPts[0];
  for(int count = 1; count < numPts; count = count +1)
  {
    cout <<  ", " << evalPts[count];
  }
  cout << "].\n";

  // Find the evaluations
  for(int count = 0; count < numPts; count = count +1)
  {
    evals[count] = thisFunc(evalPts[count]);
  }

  cout << "The evaluations are \n\t[" << evals[0];
  for(int count = 1; count < numPts; count = count +1)
  {
    cout <<  ", " << evals[count];
  }
  cout << "].\n";

  // Next show the formula:
  cout << "The rule expands to:  \n";
  cout << "(1/2)(" << delx << ")[";
  for(int count = 0; count < numPts-1; count = count +1)
  {
    cout << wts[count] << "(" << evals[count] << ")+";
    integral = integral + wts[count]*evals[count];
  }
  integral = integral + wts[numPts-1]*evals[numPts-1];
  cout << wts[numPts-1] << "(" << evals[numPts-1] << ")] \n";

  cout << "By the trapezoid rule with n = " << numPts << " evaluation points,\n";
  cout << "\t the integral is approximately " << (1/2.0)*delx*integral <<". \n";
  return 0;
}

double pow(double num, int power)
{
  if(power<=0)
  {
    throw std::invalid_argument("The function pow only accepts positive integer values.");
  }

  double answer = num;
  for(int count = 2; count <= power; count = count+1)
  {
    answer = answer*num;
  }

  return answer;
}
