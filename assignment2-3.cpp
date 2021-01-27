// Write a program that calculates and displays an employee’s total wages for the week. 
// The regular hours for the work week are 40, 
// and any hours worked over 40 are considered overtime. 
// The employee earns 
// $18.25 per hour for regular hours 
// and $27.78 per hour for overtime hours.
// The employee has worked 50 hours this week.

// Make the pseudocode algorithm shows the program’s logic.

// Pseudocode
// Regular wages = base pay rate × regular hours
// Overtime wages = overtime pay rate × overtime hours
// Total wages = regular wages + overtime wages
// Display the total wages
//Rahmat Khan
#include <iostream>
using namespace std;
int main()
{
  double work_hrs = 50;
  double regular_wages, overtime_wages;
  double base_pay_rates = 18.25, overtime_pay_rates = 28.25;
  double regular_hrs = 40, overtime_hrs;
  double total_wages;
	

	regular_wages = regular_hrs * base_pay_rates;
	overtime_hrs = work_hrs - regular_hrs;
	overtime_wages = overtime_hrs * overtime_pay_rates;
	total_wages = regular_wages + overtime_wages;

	cout << "Regular wages " << regular_wages << endl;
	cout << "Overtime wages " << overtime_wages << endl;
	cout << "Total wages " << total_wages << endl;

}