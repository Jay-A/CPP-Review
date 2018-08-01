// The point of this program is to try to learn fstream basics
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  string name1, name2, name3, name, outputName;
  char name_choice, first_char;
  // create a test.txt file in the FILES directory
  ofstream outputFile;
  ifstream inputFile;
  outputFile.open("./FILES/test.txt");

  // write some nonsense to outputFile
  outputFile << "Maybe this will work.\n \n";

  // ask user for some input for test
  cout << "Enter a name:  \n";
  cin >> name1;
  cout << "\nEnter another name: \n";
  cin >> name2;
  cout << "\nEnter another name:  \n";
  cin >> name3;

  // write these names to test.txt
  outputFile << "1" << name1 << endl;
  outputFile << "2" << name2 << endl;
  outputFile << "3" << name3 << endl;

  // For good practice close outputFile
  outputFile.close();

  // open test.txt as a ifstream
  inputFile.open("./FILES/test.txt");

  do
  {
    cout << "There are three names stored. \n";
    cout << "Which name would you like to see?  Enter 1-3: \n" << endl;
    cin >> name_choice;
  } while (name_choice !='1' && name_choice != '2' && name_choice != '3');

  do
  {
    inputFile >> name;
  } while (name[0] != name_choice);

  // close input file for good practice
  inputFile.close();

  cout << "\n You selected the name " << name.substr(1) << '.';

  return 0;
}
