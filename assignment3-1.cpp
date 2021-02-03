#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  float costA = 15, costB = 12, costC = 9;

  double ticketA, ticketB, ticketC;
   cout << "Input the number if ticketA: " << endl;
   cin >> ticketA;
   cout << "Input the number of ticketB: " << endl;
   cin >> ticketB;
   cout << "Input the number of ticketC: " << endl;
   cin >> ticketC;
   double salesA = (ticketA * costA);
   double salesB = (ticketB * costB);
   double salesC = (ticketC * costC);
   double totalSales = (salesA + salesB + salesC);
   cout << setprecision(2) << fixed << " the total ticket sales is: " << totalSales << endl;

}