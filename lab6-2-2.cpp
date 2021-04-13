#include <iostream>
using namespace std;
double nthpowerp(int num)
{
  int i;
  int nthpower = 1;
  int n;

  for (i = 0; i < num; i++)
  {
    nthpower *= 2;
  }
  cout << "2 " << "^" << num << "= " << nthpower << endl;
  return nthpower;
}