/*
[Outline]

Make a program that shows the N to the power of 0, 1, 2, 3 .. M. 

For example, if we assume that N =2, M = 3, the output is 1, 2, 4, 8. (2 to the power of 0 to 3)

[Requirements]

0 < N < 10,  1 <= M <= 10
Do not use <cmath> pow () function
*/
#include <iostream>
using namespace std;
int main()
{
  int n = 1;
  int m = 10;
  int num = n;
  cout << " ENTER NUMBER NUMBER QUARED" << endl;
  cout << " -------------------" << endl;
  while (num <= m)
  {
    cout << num << "\t\t" << (num * num) << endl;
    num++;
  }
}