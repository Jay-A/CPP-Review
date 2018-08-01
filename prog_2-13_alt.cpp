// This is meant to be a loop to display the ascii characters from 65 to 130
#include <iostream>
using namespace std;

int main()
{
  int char_int;
  char letter;

  cout << "(Integers, Characters):  \n";
  for(char_int = 65; char_int<=130; char_int++)
  {
    letter = char_int;
    cout << "( " << char_int << "," << letter << " )" << "  ";
    if(char_int%7 == 0)
    {
      cout << endl;
    }
  }

  return 0;
}
