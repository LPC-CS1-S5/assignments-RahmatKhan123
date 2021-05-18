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
#include <string>
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

int main()
{
  int empresult;
  emprecord emp[size];
}
string getid(string);
string getempname(string);
string getsalary(string);
string getdpt(string);
string getdate(string);
//[3] Make a function that constructs the structure employee.
//in this function we are going to  read all lines and then, construct the structure array to store them.
int employeerecord(emprecord ep[])
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
  while(ifso >> readline) && (cnt < 2000)
  {
    ep[cnt].id = getid(readline);
    ep[cnt].empname = getempname(readline);
    ep[cnt].salary = getsalary(readline);
    ep[cnt].dpt = getdpt(readline);
    ep[cnt].date = getdate(readline);
    cnt++;
  }
  return cnt;
}

//[4] Make function that find the particular employee with some conditions

// find the employee that as a salary greater than 100,000
//find the employee that works in the Computer Department.

void printresult(emprecord ep[], int foundresult)
{
  for (int i = 0; i < emprecord; i++)
  {
    cout << setw(5) << ep[i].id << "\t";
    cout << setw(5) << ep[i].empname << "\t";
    cout << setw(5) << ep[i].salary << "\t";
    cout << setw(5) << ep[i].dpt << "\t";
    cout << setw(5) << ep[i].date << "\t";
  }
}

string getid(string str)
{
  return str.substr(0,5);
}

string getempname(string str)
{
  int startpos, pos, endpos;
  startpos = 0;
  len = empname;
  for (int i = 0; i < len; i++)
  {
    pos = str.find( " " ,startpos);
    startpos = pos+1;
  }
  endpos = str.find( " " ,startpos);
  return str.substr(startpos, endpos-startpos);
}


//[5] Make the main function that drives your functions.
// the main function should be developed to drive all your function.
// all other assumption that are not described in this question can be made by the programmers.
