/*[Outline]

Make a program that finds the list of prime numbers between the range [begin..end] 

For example, if we assume that begin=5, end=20, the output will be 5, 7, 11, 13, 17, 19

[Requirements]

The “begin” and “end” are the user inputs that are between 1 to 100.
begin < end
[Program Input/Output]

Input: Two integers begin and end

Output: All prime numbers between begin and end

[Program Run Example]

Enter the range begin and end: 2  10

Prime numbers 2 to 10: 2, 3, 5, 7
*/
#include <iostream>
using namespace std;
int main()
{
  int i, num, end;
  cout << "I will find the prime numbers" << endl;
  cin >> end;

  for (num = 2; num <= end; num++)
  {
    for (i = 2; i <= (num/2); i++)
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