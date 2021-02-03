#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

int main()
{
  srand(time(0));

  float num1 = rand() % 100, num2 = rand() % 100, num3 = rand() % 100, sum, avg;

  sum = num1 + num2 + num3;
  avg = sum / 3;

  cout << setprecision(2) << fixed << showpoint << "your first number is: " << num1 << "\n" << "your second number is: " << num2 << "\n" << "your third number is: " << num3 << "\n" << "the total sum is: " << sum << "\n" << "the average is: " << avg << endl;
}