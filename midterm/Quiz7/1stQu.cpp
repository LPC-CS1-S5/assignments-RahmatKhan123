/*Find the element where the difference between adjacent elements is less than 10. [5 pts]
There are 10 elements with integer values in an array “number”. We will find the element where the difference between the adjacent elements is less than 10. In other words, find the element number[i] such that ( i > 0 and i < 9) 
 number[i] - number[i-1]  < 10 , and
 number[i] - number[i+1]  < 10  ,  
For the first and last element(i=0 or i=9), we will check just one adjacent value. For all other elements, we need to check the difference between the left and right adjacent elements.
In order to get the absolute value of difference between elements, we use the standard library function abs( ) that is defined in <cmath>. For example, 
if (abs(n[i] - n[i + 1]) < 10)
	cout << “ less than 10\n”;

Let’s assume that we have the array number as follows:

In this array, the first element has the subtraction difference 5 from the 2nd element. Thus the first element is one of the answers. The 2nd element has a difference of 5 and 15 from the left 
and right elements, respectively, so we skip to print out the 2nd element. And then we continue to check all elements. 
[Program Template for main]


*/
#include <cmath>
#include <iostream>
using namespace std;

const int N = 10;

int difference(int []);
int difference1(int []);
int difference2(int[]);

void printout(int []);

int main()
{
  
  int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};

  //checkZero(number);
  difference1(number);
  printout(number);
  difference2(number);
  //heckLast(number);
  printout(number);
  difference(number);
  printout(number);

}
int difference(int n[])
{
  for (int i = 0; i < N; i++)
  {
    if (i == 0){
      if(abs(n[i+1] - n[i]) < 10);{
        cout << "the absolute value of " << n[i] << " minuse " << n[i+1] << " is " << n[i+1] - n[i] << " equals to less than 10 " << endl;
        cout << "that is the 1st element difference is: " << n[i+1] - n[i] << endl;
      }
    }
  }

}

int difference1(int n[])
{
  for (int i = 0; i < N; i++)
  {
    if ( i == 9)
    {
      if(abs(n[i] - n[i-1]) < 10){
        cout << "the abs of last elemnt minus second to last element " << n[i] - n[i-1] << " is " << n[i] << endl;
      }
    }
  }
}
int difference2(int n[])
{
  for (int i = 0; i < N; i++)
  {
    if ((i > 1) && (i < 8))
    {
      if ((abs(n[i-1] - n[i]) > 0 ) && (abs(n[i+1] - n[i]) < 10))
      {
        cout << " the difference except el 1 to 9: is : " << n[i+1] - n[i] << " and " << n[i-1] - n[i] << endl;
      }
      cout << " the difference from el 1 to 8 is: " << n[i] << endl; 

    }
  }
}
void printout(int n[])
{
  for (int i = 0; i < N; i++)
    cout << n[i];
  cout << endl; 
}







