#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  
  float radius, area, lenght, width, base_lenght, height,quit = 0;
  
  int choice;
  cout << "choose from the number 1, 2, 3, 4:" << endl;
  cout << "1. Inpute to calculate the area of circle for you:" << endl;
  cout << "2. Input to calculate the area of rectangle for you: " << endl;
  cout << "3. Input to calculate the area of traingle for you:" << endl;
  cin >> choice;
    
    
  if(choice == 1)
  {

    cout << "Input the Raduis:" << radius << endl;
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << "area of cicle = " << area << endl;
  }
  
  else if (choice == 2)
  {
    cout << "input the lenght and width" << endl;
    cin >> lenght >> width;
    area = lenght * width;
    cout << "area of rectangle = " << area << endl;
  }
  else if (choice == 3)
  {
    cout << "input the lenght of base and hieght:" << endl;
    cin >> base_lenght >> height;
    area = base_lenght * height * 0.5;
    cout << "area of traingle =" << area << endl;
  }
  else if (choice == 4)
  { 
    cout << "you number is ouside range:" << endl;

  }
  else (choice < 0);
      cout << "Error!";
  
}






/*switch(choice)
  {
    case 1:
      {
        cout << "Input the radius of the circle:" << endl;
        cin >> radius;
        area = 3.14 * radius * radius;
        cout << "area of circle is: " << area << endl;
      break;
      }

      case 2:
      {
        cout << "Enter the lenght and width of of rectangle:" << endl;
        cin >> lenght >> width;
        area = lenght * width;
        cout << "area of rectangle is" << area << endl;
      break;
      }

      case 3:
      {
        cout << "Input the base-lenght and height of traingle" << endl;
        cin >> base_lenght >> height;
        area = base_lenght * height * 0.5;
        cout << "are of traingle is" << area << endl;
      break;
      }

      case 4:
      exit(0);
      }

      default:
      cout << "Invalide choice:";
      }
  }*/

      
