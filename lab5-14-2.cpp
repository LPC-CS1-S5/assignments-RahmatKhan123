#include <iostream>
#include <fstream>
#include <stdlib>
using namespace std;

int main()
{
  ifstream ifs; //creating the file stream object like varaible decleration:
  int N, num;
  int rdnum;
  unsigned seed = time(0);
  srand(seed);
  cout << "Enter the number of randon number: ";
  cin >> N;
  ifs.open("random.txt");
  if (ifs.fail())
      cerr << "File open Error!";
      exit(0);
  //while (N >0)
  ifs >> N;
  cout << "Total number of line" << N << endl;
  for (int i = 0; i < N; i++)
  {
    cout << num << "was read from the file\n";
  }
  ifs << N << endl;
  for (int i = 0; i < N; i++)
  {
    rdnum = rand() % 100;
    ifs << rdnum << endl;// open the file.
    if (! ifs.fail())
        cout << rdnum << "has written to the file:\n";
  }
  ifs.close(0);
}