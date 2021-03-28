#include <iostream>
#include <iomanip>
using namespace std;
void getinput(int &n1, int &n2, int &n3)
{
  cout << "Please Enter 3 number: " << endl;
  cin >> n1 >> n2 >> n3;
}
void minmax(int n1, int n2, int n3, int &max, int &min)
{
  min = n1;
  if(min > n2)
    min = n2;
  if(min > n3)
    min = n3;
  if(n2 > n2)
    min = n3;

  max = n1;
  if(max < n2)
    max = n2;
  if (max < n3)
    max = n3;
  if (n2 > n3)
    max =n2;
    

}

void	getinput(int &, int &, int &);
void	maxmin(int, int, int, int &, int &);  
int main()
{
  int num1, num2, num3;
  int min, max;
  getinput(num1, num2, num3);
  cout << "Your Input is" << setw(5) << num1 << setw(5) << num2 << setw(5) << num3 << endl;
  minmax(num1, num2, num3, min, max);
  cout << "Max, Min and Max-MIn" << setw(5) << max << setw(5) << min << setw(5) << max-min << endl;
}