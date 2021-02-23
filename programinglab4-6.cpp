#include <iostream>
using namespace std;
int main()
{
  int selection;
  
  double areaof_circle = "Pi times radius squared"; 
  double areaof_rectangle = "lenght time width"; 
  double areaof_cylinder = "Pi times radius squared times hieght";
  double none;
  
  selection = static_cast<char>(areaof_circle);
  selection = static_cast<char>(areaof_rectangle);
  selection = static_cast<char>(areaof_cylinder);



  cout << "which formula do you want to see: " << endl;
  cout << "Input 1" << areaof_circle << endl;
  cout << "2." << areaof_rectangle << endl;
  cout << "3." << areaof_cylinder << endl;
  cout << "4" none  << endl;

  cin >> selection;

  switch(selection)
  {
  case '1': cout << "Pi times radius squared\n";
    break;
  case '2': cout << "lenght time width\n";
    break;
  case '3': cout << "Pi times radius squared times hieght\n";
    break;
  case '4': cout << "Well Okay, then, goodbye:\n";
    defualt:
      cout << "not good with numbers:";

  }
}
// I work a lot and spent a lot of time but i couldn;t figure it out how to solve and run program that actually work. can you help me please.