#include <iostream>
using namespace std;

double nthpowern(int num)
{
  int i;
  float invertnum;
  int powernum = 1;

  num = num * -1;

  for (i = 0; i < num; i++)
  {
    powernum *= 2;
  }
  invertnum = 1.0 / powernum;

  cout << "2 " << "^" << num << "= " << invertnum << endl;

  return invertnum;
}