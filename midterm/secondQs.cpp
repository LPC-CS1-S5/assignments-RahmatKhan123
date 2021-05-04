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
  
//   ifs >> N;
  for (N = 0; N <= 10; N++){

    ifs >> name;
    ifs >> score1 >> score2;
    cout << "Name : " << name << " " ;
    cout << score1 << " " ;
    cout << score2 << endl ;
    sum = score1 + score2;
    average = sum /2.0;
    cout << "average is : " << average << endl;
    cout << "sum is : " << sum << endl;
    total = total + sum;

  if (average > 80)
    cout << "the student whose average is above 80 are: " << average << " " << name << endl;
  }
  

  
  
  ifs.close();

}
//i have initialized varaibles one string for students name, one integer for students count, two integers for students score and 3 double variables to keep the sum, average and total of the scores.
//then i used the if.open command to open the text file for the program to read from.
//then i used a for loop to count the student and print the students list with their name and their scores. i used the varaible N to keep the count starts from student one and terminta when the cound it 10. because there is 10 total students.
//then i did the aritmathic operation to get the total, sum and average of each student scores.

// then i used a if(statement to print out the students who has hight average than 80.)
//then close the file and the operating on the read file is done.