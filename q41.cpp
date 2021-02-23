#include <iostream>
using namespace std;
int main()
{
  
  float radius, area, lenght, width, base_lenght, height;
  
  int choice;
  if (choice = 1)
  {
    cout << "Input the Raduis:" << radius << endl;
    cin >> radius >> endl;
    cout << area = 3.14 * radius * radius;
  }
  if (choice = 2)
  {
    cout << "input the lenght and width" << lenght << width << endl;
    cin >> lenght >> width;
    area = lenght * width;
  }
  if (choice = 3)
  {
    cout << "input the lenght of base and hieght:" << base_lenght << height << endl;
    cin >> base_lenght >> height;
  }
  if (choice = 4)
  { 
    cout << "you number is ouside range:" << endl;

  }
  if (choice < 0)
  {
    cout << "Error!";
  }
}