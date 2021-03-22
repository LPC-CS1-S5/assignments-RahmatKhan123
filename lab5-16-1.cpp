#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ofstream ofs;
//   int N = 5; // N must be the user input
  int N ;
  int num;
  string stuname;
  double score1, score2;

//   cout << "what is the student's name: " << endl;
//   cin >> stuname;
// why above two lines are here?

  ofs.open("rahmat.txt");
  if(ofs.fail())
  {
    cerr << "file open Error! \n";
    exit(0);

  }
  cout << "Enter the number of students: ";
  cin >> N;
  ofs << N << endl;

  for (int i = 0; i < N; i++)
  {
    cout << "what is student name: \n";
    cin >> stuname;
	ofs << stuname << endl;
    for (int j = 0; j < 2; j++)
    {
      cout << "what is student score1 \n";
      cin >> score1 ;
      ofs << score1 << endl;
    }
  }
  ofs.close();


}