#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>


using namespace std;
/*Make a Program that generates three random numbers
and then calculates the summation and average.
display all the generated numbers, sum, and average with setprecision(5).*/

int main() 
{
  srand(time(0));

  float n1 = rand() % 100, n2 = rand() % 100, n3 = rand() % 100, sum, avg;

  sum = n1 + n2 + n3;
  avg = sum / 3;
  cout << setprecision(5) << fixed << showpoint << "your 1st number is: " << n1 << "\n" << "your 2nd number is " << n2 << "\n" << "your 3rd number is: " << n3 << "\n" << "your sum is: " << sum << "\n" << "your average is: " << avg << endl;
}