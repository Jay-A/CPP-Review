// This program displays a menu and asks the user to make a
// selection.  An if/else if statement determines which item
// the user has chosen.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int choice; // Holds a menu choice
  int months; // Holds number of months
  double charges; // Holds monthly charges

  // Constants for membership rates
  const double ADULT = 40.0,
               SENIOR = 30.0,
               CHILD = 20.0;

  const int ADULT_CHOICE = 1,
            SENIOR_CHOICE = 2,
            CHILD_CHOICE = 3,
            QUIT_CHOICE = 4;

  // Display the menu and get a choice
  cout << "\t\tHealth Club Membership Menu\n\n"
        << "1.  Standard Adult Membership\n"
        << "2.  Senior Citizen Membership\n"
        << "3.  Child Membership\n"
        << "4.  Quit the Program \n\n";
  cin >> choice;

  // Set the numeric output formatting
  cout << fixed << showpoint << setprecision(2);

  // Respond to the user's choice
  if (choice == QUIT_CHOICE)
  {
    cout << " Goodbye. \n";
    return 0;
  }
  else if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
  {
    cout << " That is not a valid option. \n"
      << "Please run program again. \n \n";
      return 1;
  }

  cout << "\n \nFor how many months? ";
  cin >> months;
  if (choice == ADULT_CHOICE)
  {
    charges = months * ADULT;
  }
  else if (choice == SENIOR_CHOICE)
  {
    charges = months * SENIOR;
  }
  else if (choice == CHILD_CHOICE)
  {
    charges = months * CHILD;
  }
  cout << "\nThe total charges are $" << charges <<'.';

  return 0;
}
