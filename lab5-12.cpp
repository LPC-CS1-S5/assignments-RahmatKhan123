#include <iostream>
using namespace std;
int main()
{
  int numStu, numScore;
  string stuName;
  double score, sum, average;
  
  cout << "Enter the number of student and score: ";
  cin >> numStu >> numScore;

  for (int i = 0; i < numStu; i++)
  {
    cout << "Enter student's name: ";
    cin >> stuName;
    cout << "Student name: " << stuName << "\t";
    sum = 0;
    for (int j = 0; j < numScore; j++)
    {
      cout << "Enter student score: ";
      cin >> score;
      cout << " score " << j+1 << " : " << score << endl;
      sum += score;
    }
    average = sum / numScore;
    cout << "sum of score : " << sum << "\t";
    cout << "average score: " << average << "\t";

  }
}