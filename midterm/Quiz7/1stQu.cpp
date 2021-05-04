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

//int checkZero(int []);
int difference(int []);
//int checkLast(int[]);
void printout(int []);

int main()
{
  //int difference;
  //int Zero;
  //int Last;
  int number[N] = {10, 15, 0, -25, 19, 20, 25, 30, 45, 20};

  //checkZero(number);
  //printout(number);
  //heckLast(number);
  //printout(number);
  difference(number);
  printout(number);

}
int difference(int n[])
{
  int different;
  for (int i = 0; i < N; i++)
  {
    if (i = 0)
      different == ((n[i] - n[i+1]) < 10));
    else if ( i = 9)
      different == (abs(n[i] - n[i-1]) < 10);
    else if ((i == 1) && (i = 8))
      different = ((((abs(n[i] - n[i-1]) > 0 )) || ((n[i] - n[i+1]) > 10)))) 
    else  
      return n[i]; 
    
    

  }
  return different;
}

/*[Program Requirements]
Define the function to check the element is satisfied with the difference condition.
Make the for-loop and call the function N times to check all element values

For the first and last element(i=0 or i=9), we will check just one adjacent value. For all other elements, we need to check the difference between the left and right adjacent elements.
In order to get the absolute value of difference between elements, we use the standard library function abs( ) that is defined in <cmath>. For example, 
if (abs(n[i] - n[i + 1]) < 10)
	cout << “ less than 10\n”;
*/


/*int checkZero(int n[])
{
  int Zero;
  for (int i = 0; i < N; i++)
  {
    if ((((abs(n[i] -  n[i+1]) > 0 )) && ((abs(n[i] - n[i+ 1])) < 10)))
      Zero = n[i];
  }
  return Zero;
}
int checkLast(int n[])
{
  int last;
  for (int i = 0; i < N; i++)
  {
    if ((abs(n[i = 8] - n[i+1]) <= 10))
      last = n[i];
  }
  return last;
}
*/






    
    
    /*if ((abs(n[i == 0] - n[i+1]) < 10) || (abs(n[i == 9] - n[i-9]) < 10))
    {
      cout << n[i] << " is Less than 10\n";
    }
    else if((abs(n[i] - n[i+1]) < 10) || (abs(n[i] - n[i-1]) < 10)){
      cout << n[i] << "is less than 10\n";
    }
    else 
      return 0;*/
  
void printout(int n[])
{
  for (int i = 0; i < 10; i++)
    cout << n[i];
  cout << endl;
  
}


