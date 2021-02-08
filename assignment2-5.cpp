#include <iostream>
using namespace std;

int main()
{
    double meal_price = 88.67;
    float meal_tax_percent = 1.0675;
    double meal_tip_percent = 0.2;  

    double meal_tax = meal_price * meal_tax_percent;
    double meal_tip = meal_tax * meal_tip_percent;
    double meal_total = meal_tip + meal_tax;

    cout << "Meal cost: $" << meal_price <<endl;
    cout << "Tax amount: $" << meal_tax << endl;
    cout << "Tip amount: $" << meal_tip <<endl;
    cout << "Meal Total: $" << meal_total << endl;

    return 0;
}