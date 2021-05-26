// Make a program that constructs is the binary file with the givennested structure[30pts]. the given structure must be used in your program.
/* const unsigned short N=5;
struct Scores{
  double sc[N];
  string grade;
  };
struct Grade{
  string first;
  string last;
  string ssn;
  Scores score;
};
Grade g;

*/
// grades.txt: the text file that contains the names ,SSN, 5 scores, and grade. this file has a total of 16  lines and each line is sperated by delimiter ',';
//https://github.com/Kwooley/CSO1/blob/master/final/grades.txt
// grades.bin: the binary file that consist of the binary data for structure "Score". this file should be made by your program and it must hae the exact 16 records for the structure Score.

// in your program,
//[step1] Read one line from "grade.txt" file
//[step2}] Split the line in to 8 field
//[step3] Fill the member varaibles of the structuer "Score".
//[step4]Write the structure in to the binary file "grade.bin".

//[test] download the test program and store it in the same directory with the file "grades.bin".
//compile and run the test program. the test program is supposed to print out all records from your binary file "grade.bin". Run this program and check out your result.

//https://github.com/Kwooley/CSO1/blob/master.final.q5test.cpp

// Chapter 12. Advanced File Operations
// Lab 12-1. MakeBinFile

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

const unsigned short N = 5;

struct Scores
{
  double sc[N];
  string grades;
};
struct Grade{
  string fisrt;
  string last;
  string ssn;
  Scores score;
};
Grade g;
void printstruct(Grade);
int main()
{
  ifstream ofs;

  ofs.open("grade.bin");
  
  while(ofs.write(char *)&g, sizeof(g)))
  {
    ofs.open("grade.bin");
  }
}
void ptrintstruct(Grade g)
{
  cout << "Name : " << g.first << "  " << g.last << " \t " << g.score << " \t " << g.ssn << " \n";
  cout << "\tScores: ";
  for (int i =0; i<N; i++)
    cout << showpoint << setprecision(2) << g.score.sc[i] << "\t";
  cout << "Grade " << g.score.grade << endl;
}