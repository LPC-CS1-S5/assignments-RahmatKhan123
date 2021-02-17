#include<iostream>
using namespace std;

int main()
{
  double dis1019 = 0.2, dis2049 = 0.3, dis5099 = 0.4, dis100 = 0.5, og_pri = 99, rate, numof_unit;
  numof_unit = 0;
  


  cout << "input the number of unit bought: " << endl;
  cin >> numof_unit;

  if(numof_unit < 20) {
    rate = og_pri * dis1019;
    cout << rate << endl;
  }
      else ( numof_unit >= 20  && numof_unit < 50);
        rate = og_pri * dis2049;
        cout << rate << endl;
  
   
  if(numof_unit > 49 && numof_unit < 100){ 
    rate = og_pri * dis5099;
    cout << rate << endl;
  }
    else( numof_unit >= 100);
      rate = og_pri * dis100;
      cout << rate << endl;
  
}