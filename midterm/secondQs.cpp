/*[2] Make the program that reads the student’s name(string) and two scores(integer) from the text file “students.txt” (Links to an external site.).
  Each record of the student has the three fields as follows:


Read all lines from the file and show the summation and average value of each student.
Also at the last line, show the total number of students who have an average greater than 80.*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ifstream ifs;
  string name;
  int N = 10;
  int score1, score2;
  double sum = 0;
  double average = 0;
  double total;
  

  ifs.open("students.txt");
  if(ifs.fail())
  {
    cerr << "file open Error! \n";
    exit(0);

  }
  
  ifs >> N;
  for (int i = 0; i < N; i++){

    ifs >> name;
    ifs >> score1 >> score2;
    cout << name << " " ;
    cout << score1 << " " ;
    cout << score2 << endl ;
    sum = score1 + score2;
    average = sum /2.0;
    cout << "average is : " << average << endl;
    cout << "sum is : " << sum << endl;
    total = total + sum;
  
  }
  for (int j = (total > 80); j < 3; j++)
  {
    cout << "these student have the highest total grades:" << j << endl;
  }
  
  ifs.close();

}
