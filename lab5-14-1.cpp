/*Make your programs that are  described in Programming Lab 5-14-1
Make a program that writes the given number N of integers to a file. 
The integers that we write to a file will be determined with random number generation. 
The number of integers N is determined by the user input. 
The generated N random number are stored into a file. 
Program Requirements
User input for the number of integers.
generate the N random numbers.
Create and Open the text file.
Write N random numbers into a file.*/
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main()
{
  ofstream ofs; //creating the file stream object like varaible decleration:
  int N, num;
  int rdnum;
  unsigned seed = time(0);
  srand(seed);
  cout << "Enter the number of randon number: ";
  cin >> N;
  ofs.open("random.txt");
  if (ofs.fail())
      cerr << "File open Error!";
      exit(0);
  //while (N >0)
  ofs << N;
  cout << "Total number of line" << N << endl;
  for (int i = 0; i < N; i++)
  {
    cout << num << "was read from the file\n";
  }
  ofs << N << endl;
  for (int i = 0; i < N; i++)
  {
    rdnum = rand() % 100;
    ofs << rdnum << endl;// open the file.
    if (! ofs.fail())
        cout << rdnum << "has written to the file:\n";
  }
  ofs.close();
}
