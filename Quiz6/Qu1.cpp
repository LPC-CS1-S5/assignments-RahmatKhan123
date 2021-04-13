//make a program that call the two overloaded functions SwapTwoValues() so that two values are swapped in the funciotn. according to the different parameter data types, one of the two functions will be invoked.



#include <iostream>
using namespace std;

//void getinput(int &, int &, int &);
void swapTwoValues(int &, int &);
void swapTwoValues3(float &, float &);

int main()
{
  int n1;
  float n2;
  cout << "input first number: " << endl;
  cin >> n1;
  cout << "input the second number: " << endl;
  cin >> n2;
  cout << "now i swapped them for you: " << endl;


  swapTwovalues(n1, n2);

  cout << "after swapt: " << n1 << " " << n2 <<. endl;

  swapTwoValues3(n1, n2);

  cout << "After swap : " << n1 << " " << n2 << endl;
}

void swapTwoValudes(int &n1, int &n2)
{
  int temp;
  temp = n1;
  n1 = n2;
  n2 = temp;
}
void swapTwoValues3(float &n1, float &n2)
{
  int temp;
  temp = n1;
  n1 = n2;
  n2 = temp;

  cout << "in function" << n1 << " " << n2 << endl;
}

