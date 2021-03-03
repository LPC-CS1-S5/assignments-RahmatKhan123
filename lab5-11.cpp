//make a program that find the prim numbers in a given range. 
#include <iostream>
using namespace std;
int main()
{
  int begin, end;
  int num;
  int i, flag;

  cout << "input two numbers in order to find the prim number in that Range: ";
  cin >> begin >> end;
  num = begin;
  while (num <= end)
  {
    flag = 0;
        for (num = 2; i < num/i;)
        {
          if (i % num == 0)
          {

              break;
          }

        }
    if (flag)
    //if (end >= 100)
        cout << num << " is not prim ";
    else
      cout << num << " is prim ";
  }
}