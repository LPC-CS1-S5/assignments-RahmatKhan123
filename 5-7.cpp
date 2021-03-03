/*Make programs that are described in programming lab 5-7, 5-8  in the Canvas.

Write a program that calculates the 2 to the n_th power( n is a negative or positive integer)
e.g, if n = 10,  calculates 2 ** 10 = 1024. (Do not use the function pow( ) )*/

#include <iostream>
using namespace std;

int main()
{
	int base, exp;
	int i, flag;
	double powernum;
	cout << "input the base and power number:" << endl;
	cin >> base >> exp;
	
	i = 0;
	powernum = 1;
	if (exp < 0){
		flag = 1
		exp *= -1;
	}
	while(i < exp)
	{
		powernum *= 2.0;
		i++;
		cout << powernum << endl;

	}
	if(flag) 
		powernum = 1.0/powernum;
	cout << powernum << endl;
  }
}