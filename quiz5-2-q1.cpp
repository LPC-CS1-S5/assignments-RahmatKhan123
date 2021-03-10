/*[Outline]

Make a program that finds the minimum value among the 5 random numbers.

[Requirements]

The range of random numbers: [0..99]
Print out all five generated random numbers as well as the minimum value.*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
  srand(time(0));
  float rdnum = rand();

  float min_val ;
	// the random number must generated inside the loop.
	// Thus, you can use just one var "num"

	// min must be initialized 
  for (int i = 0; i < 100; i++)
  {
    rdnum = rand() 100 / 5;
    min_val = i;
    if (min_val < rdnum);
    {
      cout << "the minimum number of five random is:" << min_val << endl;
    }
  }
}