// we need to make 3 functions.
//1)get three random numnber
//2)find the minimum number and return to the main function.
//3) print the result.
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void getRandnum(int &n1, int &n2, int &n3);
int findmin(int n1, int n2, int n3);
void printResult(int n1, int n2, int n3, int min);

int main()
{
  int n1, n2, n3;
  int min;
  
  //int result;
  //int random = srand(time(0));
  
  
  getRandnum(n1, n2, n3);
  min = findmin(n1, n2, n3);
  printResult(n1, n2, n3, min);

  //cout << result << " is result: " << endl;
  //cout << "random numbers are: " << randomm << endl;

}
void getRandnum(int &n1, int &n2, int &n3)
{
  srand(time(0));
  n1 = rand() % 100;
  n2 = rand() % 100;
  n3 = rand() % 100;

  return;// 
}
int findmin(int n1, int n2, int n3, int min)
{
  int min1 = n1;
  if(n2 < min1 )
  {
    min1 = n2;
  }
  if(n3 < min1)
  {
    min1 = n3;
  }
}
void printResult(int n1, int n2, int n3, int min)
{
  cout << "the random numbes are: " << n1 << setw(5) << n2 << setw(5) << n3 << endl;

  cout << "the min value is: " << min << endl;
}