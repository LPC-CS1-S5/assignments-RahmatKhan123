#include <iostream>
using namespace std;

void getinput(int &, int &, int &);
void swap(int &, int &);
void swap3(int &, int &, int &);

int main()
{
  int n1, n2, n3;
  n1 =10;
  n2 = 20;
  n3 = 30;
  swap(n1, n3);
  swap(n2, n3);
  cout << "after swap" << n1 << " " << n2 << " " << n3 << endl;

  swap3 (n1, n2, n3);
  cout << "after swap: " << n1 << " " << n2 << " " << n3 << endl;
}

void swap3 (int &n1, int &n2, int &n3)
{
  int temp;
  temp = n1;
  n1 = n3;
  n3 = n2;
  n2 = temp;

  cout << "in Function" << n1 << " " << n2 << " " << n3 << endl;
}
void swap(int &n1, int &n2)
{
  int temp;
  temp = n1;
  n1 = n2;
  n2 = temp;
}