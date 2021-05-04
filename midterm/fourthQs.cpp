/*[4] the program that generates a random number between 1 to 100 We are going to use the function getRdnum( ) with overloaded parameters. 
When we call the function 
getRdnum( ), without parameter, it will return a random number between 1 to 100
getRdnum(n2), with a parameter, it will return a random number between 1 to n2
getRdnum(n1, n2), it will return a random number between n1+1 to n2
Make the overload functions for generating random numbers and also make the main function to drive and test all these overloaded functions.*/
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int getRdnum(); // 10 to 100
int getRdnum( int n2); // random number 1 to n2
int getRdnum(int n1, int n2); // random number n1+1 to n2

int main()
{
  int random;
  srand(time(0));
  int n1 = 10;
  int n2 = 100;

  cout << "Random number 1 to 100 " << getRdnum() << endl;
  cout << "random number 1 to n2: " << getRdnum(n2) << endl;
  cout << "random number n1+1 to n2: " << getRdnum(n1) << endl;
}

int getRdnum()
{
  return rand() % 100 + 1;
}
int getRdnum(int n2)
{
  int n;
  int num;
  num = rand() % n2 + 1;
  return num;
}

int getRdnum(int n1, int n2)
{
  int num;
  num = rand() % (n2 - n1 + 1);

}
//in this function overloading program, i used 3 functions with same name but different parameters.
// a function with same name but different parameter is called overloaded function.
//1st function with no parameter generate one random number between 1 to 100. the rand() % 100 + 1: 

// second function with parameter n2, generate a random number from from 1 to n2. that being done by the rand() % n2 + 1;
// this operation divide the generated random number by value of n2 and then output the result, which is the number between 1 to n2, n2 = 100, so greater then our 1sr randum number and smaller then n2 which is 100.

// 3rd function generate a random number n1 to n2, that is done by dividing the generated randum number by the difference of n2 and n1;
// and in the main function i call all the 3 overloeading functions, and print them out.