//the bellow program is supposed to find the row that has the greatest summation of row elements.
// in this program, the correct result is " 8 8 7 8 9" since the summation of this row is 40 which is the greatest summation among rows. but when you run this program. this program shows the wrong result, 1 2 1 2 3".
//by using the "debugger" fix the runtime error(s) and make the program shows the correct result, and elaborate on what you fixed and what reason(s) are (No points wihtout elaboration on why this code has the logical Erros)

//no need to make the program on github, just make an essay in the Canvas collumn.

#include <iostream>
#include <iomanip>
using namespace std;
void findMaxSum(int [], int [][5], int, int);
const int SIZE = 10;
int main()
{
  const int NUM_ROWS=6; // Number of rows
  const int NUM_COLS = 5; // number of collumns
  
  int result[SIZE] = {0};
  int numbers[NUM_ROWS][NUM_COLS] = {{2 ,7, 9, 6, 4},
                                     {6, 1, 8, 10, 4},
                                     {4, 3, 7, 2, 9},
                                     {9, 9, 0, 3, 1},
                                     {8, 8, 7, 8, 9},
                                     {1, 2, 1, 2, 3}};
  findMaxSum(result, numbers, NUM_ROWS, NUM_COLS);
  cout << "The row values are: ";
  for (int i = 0; i < NUM_COLS; i++)
    cout << setw(5) << result[i];
  cout << endl;
}

void findMaxSum(int result[], int num[][5], int rows, int cols)
{
  int sumrow = 0;
  // sum = 0,
  int idx;
  for (int i = 0; i < rows; i++)
  {
    int sum=0; // sum should be declared here.
    for (int j = 0; j < cols; j++)
    {
      cout << setw(5) << num[i][j];
      sum = sum + num[i][j];
    }
    if(i == 0)
      sum = sumrow;
    else if ( sumrow > sum)
      sumrow = sum;
    idx = i;
  }
  for (int i = 0; i < cols; i++)
    result[i] = num[idx][i];
}