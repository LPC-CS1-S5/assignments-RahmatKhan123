//Programming Lab 5-11
//Make a program that find the prime numbers in the given range. 
//example) find the prime numbers in the range [1..100]
//2, 3, 5, 7, ... , 97//
#include <iostream>
using namespace std;
int main()
{
  int i, num, end;
  cout << "i will find the prim number up to 100: Input 100: " << endl;
  cin >> end;


  //while (begin < end)
  //{
    //i//nt flag = 0;
    for (num = 2; num <= end; num++)
    {
      for(i = 2; i <= (num/2); i++)
      {
        if (num % i == 0)
        {
          i = num;
          break;
          
        }
      }
      if (i != num)
      {
        cout << num << " ";
      }
    }
}