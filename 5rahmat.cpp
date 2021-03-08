#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ofstream ofs;
  int N = 5;
  int num;
  string stuname;
  double score1, score2;
  cout << "what is the student's name: " << endl;
  cin >> stuname;
  ofs.open("rahmat.txt");
  if(ofs.fail())
  {
    cerr << "file open Error! \n";
    exit(0);

  }
  for (int i = 0; i < N; i++)
  {
    cout << "what is student name: \n";
    cin >> stuname;
    for (int j = 0; j < 2; j++)
    {
      cout << "what is student score1 and score2: \n";
      cin >> score1 >> score2;
      ofs << score1 << score2 << endl;
    }
  }
  ofs.close();


}