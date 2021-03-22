#include <iostream>
using namespace std;

int inputvalidate(int, int);
void getlistprime(int, int);

int main()
{
  int begin, end;
  int res;

  cout << "Enter your two input numbers: " << endl;
  cin >> begin >> end;
  
  res = inputvalidate(begin, end);
  if (!res)
      exit(0);
  getlistprime(begin, end);
}

int inputvalidate(int begin, int end)
{
  if((begin > end) ||(begin <0) || (end <0))
      return 0;
  else
      return 1;
}
void getlistprime(int begin, int end)
{
  int i, j;
  for (i = begin; i <= end; i++)
  {
    for (j = 2; j <=(i/2); j++)
        if(i % j == 0)
          break;
    if(j > i/2)
      cout << i << "Prime Number \n";
  }
}