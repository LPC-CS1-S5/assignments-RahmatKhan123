#include <iostream>
#include <string>
#include <iomanip> 
#include <fstream>
using namespace std;

int main()
{
  ifstream ifs;
  int N, id, i;
  string name, employee, dept;
  double salary;
  double average, total;

  ifs.open("employee.txt");
  if (ifs.fail())
  {
    cerr << "File open Error!\n ";
    exit(0);


  }
  total = 0;
  N = i;
 


  for (int i = 0; i <= N; i++)
  {
    ifs >> id >> name >> salary >> dept;
    cout << "salar: " << salary << endl;
    cout << "Employee:" << employee <<endl;
    cout << "Employee ID" << id << endl;
    cout << "Employee name:" << name << endl;
    cout << "Employee  department:" << dept << endl;
    
    total =+ salary;
    cout << "total is:" <<  total;
    average = total / N;
    cout << "average is: " << average << endl;
  }

  ifs.close();
}
