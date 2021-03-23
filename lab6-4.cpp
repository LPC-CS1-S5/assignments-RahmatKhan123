#include <iostream>
using namespace std;

int getSummation(int);

int main()
{
  int N;
  int sum;
  do
  {
      cout << "Enter a number " << endl;
      cin >> N ;
      if (N!= -1)
      {
        sum = getSummation(N);
        cout << "the sum is: " << sum << endl; 
      }

  }
  while (N != -1);
}
int getSummation(int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
      if (N < 0) 
        break;
        sum += i;
    }
    return (sum);
  
}