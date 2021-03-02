/*Write a program that finds the sequence of 2 to power n in the given range.
e.g, if the range = [0, 100], show the list 2, 4, 8. 16. 32, 64*/
#include <iostream>
using namespace std;
int main()
{
  int begin, end, i, powernum;
  cout << "please input the range between 0 and 100: " << endl;
  cin >> begin >> end;
  i = 0;
  powernum = 1;

  while (powernum < begin)
  {
    powernum *= 2;
  }
  while (powernum < end)
  {
    powernum = powernum * 2;
    cout << powernum;
  }
  i++;
}