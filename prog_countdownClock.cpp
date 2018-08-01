// This program is meant to ask the user for hour, minutes, seconds
// and then counts down that much time
#include <iostream> // for cin cout
#include <iomanip> // for setw
using namespace std;

int main()
{
  int hours, minutes, seconds;

  // ask user for starting time
  cout << "How many hours? \n";
  cin >> hours;
  cout << "\nHow many minutes? \n";
  cin >> minutes;
  cout << "\nHow many seconds? \n";
  cin >> seconds;

  cout << '\n';

  cout << fixed << right;
  cout.fill('0');

  // loop through hours, minutes, and seconds
  do // hours loop, do while hours > 0
  {
    do // minutes loop, do while minutes > 0
    {
      minutes --;

      do // seconds loop, do while seconds > 0
      {
        seconds --;

        // Display timer
        cout << setw(2) << hours << ":";
        cout << setw(2) << minutes << ":";
        cout << setw(2) << seconds << endl;
      } while (seconds > 0);
      seconds = 60;

    } while (minutes > 0);
    minutes = 60;

  hours --;
  } while (hours >= 0);
}
