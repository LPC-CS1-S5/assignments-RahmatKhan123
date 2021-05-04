/*[2] Print the left bottom triangle in 2D array.

We have a 2D array as following:
Make the function “printtriangle” that print out the elements as follows:
Use the given main function template and print out these elements only with the nested for-loop structures.


// Use this main function.
*/
#include <iostream>
using namespace std;

void printtriangle(int numbers[][3], int);
int main()
{
  const int SIZE = 3;
  int numbers[SIZE][SIZE] = { {0, 1, 2}, {3, 4, 5}, {6, 7, 8} };
    
  printtriangle(numbers, SIZE);
}
void printtriangle(int num[][3], int size)
{
  int triangle;
  for (int i = 0; i < size; i++)
  {
    for (int j = i; j <= i; i++)
    {
        cout << num[i][j] << endl;
    }
  }
  cout << endl;
   
}


