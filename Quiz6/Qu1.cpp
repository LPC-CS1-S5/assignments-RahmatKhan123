//make a program that call the two overloaded functions SwapTwoValues() so that two values are swapped in the funciotn. according to the different parameter data types, one of the two functions will be invoked.



#include <iostream>
using namespace std;

//void getinput(int &, int &, int &);
void swapTwoValues(int &, int &);
void swapTwoValues3(float &, float &);

int main()
{
  int n1 =10 , n2 =20;
  cout << "input first two number: " << endl;
  cin >> n1>> n2;
  swapTwoValues(n1, n2);
  cout << "after swapt: " << n2 << " " << n1 << endl;

  float f1 = 10.25, f2 = 20.20;
  cout << "Input 2nd two decimale values: " << endl;
  cin >> f1 >> f2;
  swapTwoValues3(f1 , f2);

  
  cout << "After swap : " << f2 << " " << f1 << endl;
  return 0;
}

void swapTwoValudes(int &n1, int &n2)
{
  int temp;
  temp = n1;
  n1 = n2;
  n2 = temp;
  cout << "in function: " << n1 << " " << n2 << endl;
}
void swapTwoValues3(float &f1, float& f2)
{
  float temp1;
  temp1 = f1;
  f1 = f2;
  f2 = temp1;

  cout << "in function" << f1 << " " << f2 << endl;
}

