/*[3] Make the program that finds the greatest number in the first half and the second half in the array.
Let’s assume that we have an array “number” which has the size N=10. Make the program that finds the greatest number between number[0] and number[N/2 - 1] and also between number[N/2] to number[N-1].

[Program Requirements]
Define the function “findMax( )” to get the greatest number in a certain range.
Int findmax(int number[], int from, int to);
Return value: the greatest number within the index from and to.
int from : the starting index of the range
int to: the last index of the range*/

#include <iostream>
using namespace std;
int findmax(int [], int, int);
const int N = 10;
int main()
{
  int i;
  int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};
  int from = number[N];
  int to = number[i-1];
  
  
  findmax(number, from, to);
}
//Let’s assume that we have an array “number” which has the size //N=10. Make the program that finds the greatest number between //number[0] and number[N/2 - 1] and also between number[N/2] to //number[N-1].

int findmax(int num[], int from, int to)
{
  int firstmax = num[0];
  int secondmax = num[0];
  
    for ( int i = 0; i <N/2-1;i++)
    {
      if (num[i] < firstmax)
      {
        firstmax = num[i];
      }
      cout << firstmax << endl;
      for (int i = N/2-1; i < N; i++)
      {
        if ( num[i] < secondmax)
        {
          secondmax = num[i];
        }
        cout << secondmax << endl;
      }
    }
}
