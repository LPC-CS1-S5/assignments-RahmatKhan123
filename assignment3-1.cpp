#include<iostream>
using namespace std;
int main()
{
  float celcius, fahrenhiet;
  cout << "Input a celcius degree: " << endl;
  cin >> celcius;
  fahrenhiet = celcius * 1.8 + 32;
  cout << "your celsius degree in fahrenhiet is: " << fahrenhiet << endl;
}
