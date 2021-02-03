#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  double males;
  double females;
  cout << "Input the total amount of male and female in the class" << endl;
  cin >> males;
  cin >> females;
  double totalStudents = males + females;
  double percentageMale = (males / totalStudents) * 100;
  double percentageFemale = (females / totalStudents) * 100;

  cout << setprecision(2) << fixed << "the percentage of males " << percentageMale << " % " << endl;
  cout << setprecision << fixed << "the percentage of female is " << percentageFemale << " % " << endl;
}