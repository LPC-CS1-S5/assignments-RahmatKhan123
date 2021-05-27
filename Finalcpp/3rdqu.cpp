// lets us assume that two integer arrays as following[20pts]

#include <iostream>
using namespace std;
int main()
{
  const int SIZE1=5;
  const int SIZE2 = 10;
  int number1[SIZE1] = {2, 3, 5, 9, 10};
  int number2[SIZE2] = {1, 2, 3, 5, 9, 11, 13, 15, 17};

  for (int i = 0; i <=5; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (number1[i] == number2[j])
      {
        cout << number1[i] << "exist in " << number2[j] << endl;
      }
    }
  }
}

// we are going to check the inclusion relatinship between the two arrays. in this program, we need to check that the "number1" is a subset of the "number2" (no need to check the reversway) We assum that two arrays"number1" and "number2" have the sorted order(increasing).

//if it is implemented without a nested-loop, you can get the extra points.
//tips: two array have already sorted in ascending order.