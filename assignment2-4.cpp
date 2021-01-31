#include<iostream>
using namespace std;
int main()
{
  /*
  Write a program that calculates and displays an "sales price", "discount rate", and "discount amount".

suppose a retail business sells an item that is regularly priced at $59.95
and is planning to have a sale where the item’s price will be reduced by 20 percent
Make the pseudo code algorithm shows the program’s logic.

Pseudo code
regular_price = 59.95
discount_amount = regular_price X 0.2
sales_price = regular_price - discount_amount
*/

double regular_price = 59.95;
cout << "regular price is " << regular_price << endl;
double discount_amount = regular_price * 0.2;
cout << "discount amount is: " << discount_amount << endl;
double sales_price = regular_price - discount_amount;
cout << "sales price is " << sales_price << endl;  
}