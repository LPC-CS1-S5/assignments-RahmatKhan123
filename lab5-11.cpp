//Programming Lab 5-11
//Make a program that find the prime numbers in the given range. 
//example) find the prime numbers in the range [1..100]
//2, 3, 5, 7, ... , 97//
#include <iostream>
using namespace std;
int main()
{
  int begin = 1, end = 100;
  

  cout << "prim numbers in range from: " << begin << " to " << end << " is: " << endl;
  while (begin < end)
  {
    int flag = 0;
    for (int i = 2; i <= begin / 2; i++)
    {
      if (begin % i == 0)
      {
        flag = 1;
        break;
      }
      
    }
    if (flag = 0)
        cout << begin << " ";
    begin++;
  }
  
}
