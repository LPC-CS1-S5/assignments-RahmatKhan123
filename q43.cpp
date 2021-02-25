//[2] shipping Charges
#include <iostream>
using namespace std;
int main()
{
  double kg_wit, distance, total_charges, rate;
  cout << "Company charges:" << endl;
  cout << "2KG or less :  $1.10" << endl;
  cout << "over 2kg and less 6kg : 2.20" << endl;
  cout << "over 6kg but not more than 10kg : 3.70 " << endl;
  cout << "over 10kg but not more than 20kg : 4.80" << endl;
  cout << "we do not ship more than 3000 miles or less than 10 mile:" << endl;
  cout << "we do not ship less than zero in weight or more than 20kg:" << endl;

  cout << "input the weight  order" << endl;
  cin >> kg_wit;

  if (kg_wit > 20 || kg_wit < 0)
  {
    cout << "Error! we don't ship more than 20kg or less than 0kg:" << endl;
    system("pause");
    return (0);
  }
  cout << "input the distance for the order please:" << endl;
  cin >> distance;
  if (distance < 10 || distance > 3000)
  {
    cout << "we don't ship order less than 10 miles or more than 3000 miles:" << endl;
    system("pause");
    return(0);
  }
  
  else if (kg_wit > 0 && kg_wit < 2)
  {
    rate = 1.10;
    total_charges = (distance / 500.00) * 1.10;
    cout << "Your total Charges is:" << total_charges << endl;
  }
  else if (kg_wit > 2 && kg_wit < 6)
  {
    rate = 2.20;
    total_charges = (distance / 500.00) * 2.20;
    cout << "Your total charges are:" << total_charges << endl;
  }
  else if (kg_wit > 6 && kg_wit < 10)
  {
    rate = 3.70;
    total_charges = (distance / 500.00) * 3.70;
    cout << "your total charges are:" << total_charges << endl;
  }
  else if (kg_wit > 10 && kg_wit < 20)
  {
    rate = 4.80;
    total_charges = (distance / 500.00) * 4.80;
    cout << "your total_charges are: " << total_charges << endl;
  }
  

}

  
  
