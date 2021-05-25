//Create the structure for the information about employee
//we are going to declare the structure for the employee record. the record contains a couple of personal information for an employee such as
//ID: 6 digit numeric value
//name: 1sr name and last name(Two words)
//Salary: Anual salary( 0 - 500000)
// Department Name: the Department that the employee works for(one word)
// Date: the date which the employee starts to work in this company(Mon Day Yr)
//the Data type for each memeber data of structure can be declared with the built-in-data type or user-defined another structure. The design of the structure depends on the programmer.

//[2] Create text file for the employee information
// the textfile "employee.txt" contains the indiviual personal information for the structure employee.
//Each line contains all data for an employee structure that has been created in[1] for example. 123456 John Doe 140000 Computer Jan 21 2020.

const int size = 2000;
#include <iostream>
#include <fstream>
using namespace std;


struct employee{
  int id;
  string name;
  string lname;
  int salary;
  string dpt;
  string month;
  int day;
  int year;
};

//[2] Create text file for the employee information
// the textfile "employee.txt" contains the indiviual personal information for the structure employee.
int makestructarray(employee[]);


//i am going to make a function that find a particular employee with some condition.
// finding an employee that has a salary greater then 100000.
void largesalaryemp(employee[], int);


//finding the employee that work in computer department.
void findcomputer(employee[], int);
void printresult(employee [],emp);


int main()
{
  employee emp[size];
  int numofemployee = 0;

  numofemployee = makestructarray(emp);
  cout << "There are " << numofemployee << "employees. " << endl;

  cout << "the Employee or employees with salary more then 100000 are: " << endl;
  largesalaryemp(emp, numofemployee);

  cout << "the number of employee works in computer department are" << endl;
  findcomputer(emp, numofemployee);
  //void printresult(employee emp);
}


//[3] Make a function that constructs the structure employee.
//in this function we are going to  read all lines and then, construct the structure array to store them.
int makestructarray(employee emp[])
{
  ifstream ifs;
  int i;
  ifs.open("employee.txt");
  if(!ifs)
  {
    cout << "File open Error: \n";
    exit(0);
  }
  if(ifs)
  {
    int i = 0;
     while (ifs >> emp[i].id >> emp[i].name >> emp[i]lname >> emp[i].salary >> emp[i].dpt >> >> emp[i].month >> emp[i].day >> emp[i].year)
     {
       i++
     }
     return i;
  }
  
}
// this function is for salary greater then 100000
void largesalaryemp(employee emp[], int numofemployee)
{
  for (int i = 0; i < numofemployee; i++)
  {
    if( emp[i].salary > 100000)
    {
      printresult(emp[i]);
    }
  }
}

void findcomputer(employee emp[], int numofemployee)
{
  for (int i = 0; i < numofemployee; i++)
  {
    if (emp[i].dpt == "Computer")
    {
      printresult(emp[i]);
    }
  }
}

void printresult(employee emp)
{
  cout << " ID " << "\t\t Name " << " \t\t Salary " << " \t Department " << " Month Day Year " << endl;

  cout << emp.id << "\t";
  cout << emp.name << "\t";
  cout << emp.lname << " \t ";
  cout << emp.salary << " \t";
  cout << emp.month << "\t;";
  cout << emp.day << " \t";
  cout << emp.year   << endl;
}