//Make a program that find prime numbers acoording to two user inputs[begin, end].
//begin and end must be positive integers.
//if begin == end, getlisprime(int) function is called with defualt agruement [begin, 100]
//if begin > end, getlistprime() function called with defualt argument [0,100]
//if begin < end, getlistprime(int, int) function is called with the range from begin to end.

//EX: user input = 20,20 call getlistprime(20) // the second parameter is defualt.
//user input = 40,20: call getlistprime()//both parameter are defualt.

// user input = 20,50 call getlistprime(20,50) //call the function with actual agruements.

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
