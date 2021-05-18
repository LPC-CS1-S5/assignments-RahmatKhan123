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

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
using namespace std;

const int size = 2000;
const char numname=2;
struct emprecord
{
  int id;
  string empname[numname];
  int salary;
  string dpt;
  int date;
};

int employeerecord(emprecord emp[]);
void printresult(emprecord emp[], int result);
string getid(string);
string getempname(string);
string getsalary(string);
string getdpt(string);
string getdate(string);
int main()
{
  int empresult = 0;
  int result = 0;
  emprecord emp[size];

  empresult = employeerecord(emp);
  printresult(emp,result);
}

//[3] Make a function that constructs the structure employee.
//in this function we are going to  read all lines and then, construct the structure array to store them.
int employeerecord(emprecord emp[])
{
  int cnt = 0;
  string readline;
  ifstream ifso;

  ifso.open("employee.txt");
  if(!ifso)
  {
    cout << "File open Error: \n";
    exit(0);
  }
  while((ifso >> readline) && (cnt < 2000))
  {
    emp[cnt].id = getid(readline);
    emp[cnt].empname = getempname(readline);
    emp[cnt].salary = getsalary(readline);
    emp[cnt].dpt = getdpt(readline);
    emp[cnt].date = getdate(readline);
    cnt++;
  }
  return cnt;
}

//[4] Make function that find the particular employee with some conditions

// find the employee that as a salary greater than 100,000
//find the employee that works in the Computer Department.

void printresult(emprecord emp[], int result)
{
  for (int i = 0; i < result; i++)
  {
    cout << setw(5) << emp[i].id << "\t";
    cout << setw(5) << emp[i].empname << "\t";
    cout << setw(5) << emp[i].salary << "\t";
    cout << setw(5) << emp[i].dpt << "\t";
    cout << setw(5) << emp[i].date << "\t";
  }
}

string getid(string str)
{
  int startpos, pos;
  int idlen = 6;
  int id;
  startpos = 0;
  for (int i =0; i < idlen; i++)
  {
    pos = str.find(" ", startpos);
    startpos = pos+1;
  }
  id = stoi(str.substr(pos+1, idlen));
  return id;
}

string getempname(string str)
{
  int startpos, pos, endpos;
  startpos = 0;
  int len = 10;
  for (int i = 0; i < len; i++)
  {
    pos = str.find( " " ,startpos);
    startpos = pos+1;
  }
  endpos = str.find( " " ,startpos);
  return str.substr(startpos, endpos-startpos);
}
string getsalary(string str)
{
  int startpos, pos, endpos;
  startpos = 0;
  int salary;
  int salarylen = 6;
  for (int i =0 ; i < 6; i++)
  {
    pos = str.find( " ", startpos);
    startpos = pos+1;
  }
  salary = stoi(str.substr(pos+1, salarylen));
  return salary;
}
string getdpt(string str)
{
  int startpos, pos, endpos;
  startpos = 0;
  
  int deptlen = 8;
  for (int i = 0; i < 8; i++)
  {
    pos = str.find( " ", startpos);
    startpos = pos+1;
  }
  endpos = str.find( " ", startpos);
  return str.substr(startpos, endpos-startpos);
}
string getdate(string str)
{
  int startpos, pos, endpos;
  startpos = 0;
  int datelen = 10;
  int date;
  for (int i = 0; i < 10; i++)
  {
    pos = str.find( " ", startpos);
    startpos = pos+1;
  }
  date = stoi(str.substr(pos+1, datelen));
  return date;
}


//[5] Make the main function that drives your functions.
// the main function should be developed to drive all your function.
// all other assumption that are not described in this question can be made by the programmers.
