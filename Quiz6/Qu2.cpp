// we need to make 3 functions.
//1)get three random numnber
//2)find the minimum number and return to the main function.
//3) print the result.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int findmin(int n1, int n2, int n3);
void getRandnum(int n1, int n2, int n3);
void printResult(int n1, int n2, int n3, int min);

int main()
{
  int n1, n2, n3;
  
  int result;
  int random = srand(time(0));
  int min;
  
  
  int min = findmin(n1, n2, n3);
  random = getRandnum(int, int);
  printResult(n1, n2, n3, min);

  cout << result << " is result: " << endl;
  cout << "random numbers are: " << randomm << endl;

}
void getRandnum(int &n1, int &n2, int &n3)
{
  srand(time(0));
  int random = rand() %3;
  n1 = rand() % 10;
  n2 = rand() % 20;
  n3 = rand() % 30;
}
int findmin(int &n1, int &n2, int &n3, int &min)
{
  int min;
  min = n1;
  if(min > n2 )
    min = n2;
  if( min > n3)
    min = n3;
  if(min > n3)
    min = n3;
}
void printResult(int &n1, int &n2, int &n3, int &min)
{
  result = random;

}