//Make a program that finds the minimum and maximum values among three integer values.

//int num1, num2, num3;
//cin >> num1 >> num2 >> num3;
//Find the min and max among three values.
//Display the numbers with ascending order ( min, other, //max).
#include <iostream>
using namespace std;

int main()
{
  int num1, num2, num3;
  cout << " Enter 3 numbers:" << endl;
  cin >> num1 >> num2 >> num3;

  if (num1 < num2)
  {
    cout << "1st number is minimum number: " << endl;
    if ( num2 < num3)
        cout << "3rd number is the maximum number: " << endl;
    
  }
  else
    cout << "other number:";

}