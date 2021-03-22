#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ifstream ifs;
//   int N = 5; // N must be the user input
  int N ;
  int num;
  int sum = 0;
  string stuname;
  double score1, score2, average, total;

//   cout << "what is the student's name: " << endl;
//   cin >> stuname;
// why above two lines are here?

  ifs.open("rahmat.txt");
  if(ifs.fail())
  {
    cerr << "file open Error! \n";
    exit(0);

  }
  
  ifs >> N;
  for (int i = 0; i < N; i++){

    ifs >> stuname;
    ifs >> score1 >> score2;
    cout << stuname << " " ;
    cout << score1 << " " ;
    cout << score2 << endl ;
    sum = score1 + score2;
    average = sum /2.0;
    cout << "average is : " << average << endl;
    cout << "sum is : " << sum << endl;
    total = total + sum;
  
  }
  total = total;
  average = sum / 2.0;
  cout << " the average of all student is: " << average << endl;
  cout << "the total score of all student is: " << total << endl;
  ifs.close();

}