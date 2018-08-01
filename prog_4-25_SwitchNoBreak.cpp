// This program uses the "fall through" approach to a switch/case statement
#include <iostream>
using namespace std;

int main()
{
  int modelNum;  // Very descriptive variable title

  do
  {
    // Get model number from user
    cout << "The TV comes in three models:\n"
      << "The 100, 200, or 300.  Which do you want?  \n \n";
    cin >> modelNum;

     // Display the model features
     cout << "The model you selected has the following features:  \n";
     switch (modelNum)
     {
       case 300: cout << "\tPicture-in-a-picture.\n";
       case 200: cout << "\tStereo sound.\n";
       case 100: cout << "\tRemote control.\n";
          break;
       default: cout << "You can only choose from the 100,";
          cout << "200, or 300.\n";
     }
   } while (modelNum != 100 && modelNum != 200 && modelNum != 300);
   return 0;
}
