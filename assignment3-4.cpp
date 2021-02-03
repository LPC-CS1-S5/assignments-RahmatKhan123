#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
   char month1, month2, month3;
  float rain_amount1, rain_amount2, rain_amount3;
  double avg;
  cout << "Input the 1st month name and rain amount:" << endl;
  cin >> month1 >> rain_amount1;
  cout << "Input the 2nd month and rain_amount" << endl;
  cin >> month2 >> rain_amount2;

  cout << "Input the 3rd month and its rain_amount:" << endl;
  cin >> month3 >> rain_amount3 << endl;
  avg = ( rain_amount1 + rain_amount2 + rain_amount3) / 3.0;
  cout << "The average amount of raint fall for 3 monthn: " << month1 << " " << month2 << " " << month3 << " is" << avg << endl;
}