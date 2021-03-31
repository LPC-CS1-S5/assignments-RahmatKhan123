/*Make your program that asks for two user input num1 and num2 (integer) and calculate the integer division n1/n2 if n1 > n2. Otherwise n2/n1. And then, the result must be written into the file "question5.txt". If the two numbers are the same, we will stop the program.

Make the function getInput to take two user input
Make the function isSame to check two numbers are the same. This function could be used as an exit condition of the loop structure.
Make the function intDivision to calculate the division.
Make the function fileWrite to write the division result to a file
Make the main function to drive all these functions
All other considerations for designing the programs can be set by your algorithms and your design specification.

the number of parameters, parameter data type, return value and type, and so on.*/
#include <iostream>
#include <fstream>
using namespace std;

void getInput(int &, int &);
int isSame(int, int);
int intDivision(int, int);
void fileWrite(ofstream &, int);

int main()
{
  int num1, num2;
  int div;

  ofstream ofs;
  ofs.open("question5.txt");
  if (ofs.fail())
  {
    cerr << "File open Error\n";
    exit(0);
  }
  while(1)
  {
    getInput(num1, num2);
    if (isSame(num1, num2))
      break;
    div = intDivision(num1, num2);
    fileWrite(ofs, div);
  }
  ofs.close();
}

void getInput(int &n1, int &n2)
{
  cout << "enter the 1st number: " << endl;
  cin >> n1;
  cout << "Enter the 2nd number: " << endl;
  cin >> n2;
}
int isSame(int n1, int n2)
{
  if (n1 == n2)
    return(1);
  return(0);
}

int intDivision(int n1, int n2)
{
  int result;
  if (n1 > n2)
  {
    result = (n1 / n2);
  }
  else
    result = (n2 / n1);
  return result;

}
void fileWrite (ofstream &ofs, int div)
{
  ofs << div << endl;
  if(ofs.fail())
  {
    cerr << "file Write Error: \n";
    exit(0);
  }
}