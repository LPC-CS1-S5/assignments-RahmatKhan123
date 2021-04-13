//make a program that find the prime numbers in the given range.
//complete by completing sub functions.

#include <iostream>
using namespace std;
int inputvalidation(int, int);
void islistprime(int, int);
int main()
{
  /*int begin, end;
  int res;

  cout << "enter two inputs: " << endl;
  cin >> begin >> end;
  res = inputvalidation(begin, end);
  if(!res)
    exit(0);

  islistprime(begin, end);



}
int inputvalidation(int begin, int end)
{
  if((begin > end || begin < 0 || end < 0))
    return 0;
  else
    return 1;
  
}
void islistprime(int begin, int end)
{
  int i, j;
  for (i = begin; i <= end; i++)
  {
    for (j = 2; j <= (i/2); j++)
    {
      if (i % j == 0)
        break;
    }
    if (j > (i/2))
      cout << i << "Is prime number: " << endl;
  }*/

  int begin, end;
  int res;

  cout << "enter two number: " << endl;
  cin >> begin >> end;
  res = inputvalidation(begin, end);
  if(!res)
    return(0);
  islistprime(begin, end);

  

}
int islistprime(int begin, int end)
{
  int i, j;
  for(i = begin; i <= end; i++)
  {
    for (j = 2; j <= (i/2); j++)
    if (i%j == 0)
    break;
  }
  if (j > (i/2))
    cout << i << "is prime: " << endl;
}
void inputvalidation(int begin, int end)
{
  if((begin < 0 || begin > end || end < 0))
  {
    return(0);
  else
    return(1);
  }
}