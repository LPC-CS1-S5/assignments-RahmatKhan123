#include <iostream>
using namespace std;

void getlistprime(int begin, int end);
int main()
{
  int num, i;
  int begin, end;
  int prime_numnber;

  cout << "enter a starting  value:" << endl;
  cin >> begin;

  cout << "Enter a ending value: " << endl;
  cin >> end;

  cout << "the prime number between:" << begin << "and" << end << "are " << endl;

  getlistprime(begin, end);
}
void getprimenumber(int begin, int end)
{
  int i, num;
  num = begin;
  while (num <= end)
  {
    for (i = 2; i < num; i++)
    {
      if (num % i == 0)
        break; 
    }
    if( !(i != num))
      cout << num << " is prime number: " << endl;
    num++;
  }
}
