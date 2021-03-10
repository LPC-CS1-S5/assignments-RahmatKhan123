/*Question 4 requires two programs to write to and read from a file “employee.txt”.
[1] The Writing Program
We will make the “Employee Record” information and want to store it in a file “employee.txt”. In this record, the following fields are used with the given data types.
Employee ID: Integer
Employee Name: String
Department Name: String
Salary: double
Here is the example of one employee record.*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
  int i, id, N;
  string name, employee, dept;
  double salary, total, average;

  ofstream ofs;

  ofs.open("employee.txt");
  if (ofs.fail())
  {
    cerr << "file failed to open:\n";
    exit(0);
  }
  total = 0;
  N = i;
  
  cout << "How many entry you want to add: \n";
  cin >> N;

  for (int i = 1; i <= N; i++)
  {
    cout << " Information of employee's id : " << endl;
    cin >> id;
    cout << " Please enter the name of eployee : " << endl;
    cin >> name;
    cout << " enter the salary of eployee :  " << endl;
    cin >> salary;
    cout << "Enterh the Department of employee: " << endl;
    cin >> dept;


    ofs << id << " ";
    ofs << name << " ";
    ofs << salary << " ";
    ofs << dept << " \n ";
  
    total += salary;
    cout << "total is " << total << endl;
    average = total / N;
    cout << "average is: " << average << endl;
  }
  ofs.close();

}