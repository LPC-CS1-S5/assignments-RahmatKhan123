/*[1] Show the result of the following code and elaborate on the process of the loop iterations and how many iterations it has. (20pts). */
#include <iostream>
using namespace std;

int main()
{
  const  int N=5, M=5;
    int     i, j;
    for(i=0;i<N;i++) { // i= 0,1.2.3 4
        for(j=i; j<M-i; j++) //i=0,  j = 0, 4
							// i=1, j = 1, 3
							// i=2, j = 2, 2
							// i=3, j 
            cout << " (" << i << "," << j << ") " ;
        cout << endl;
    }
}

// it has 18 iteration.
// it wokr such as, start print when both"i" and "j" are at zero.
//then print out 0 for i and j.
// then keeps print 0 for i until M is less i which is 4. because i is 5.
// the print 1 for i and print j until J is less then previews i which was 4, so j is print until 3.
// print 2 for i and 2 for j and loop terminate becuase j can not become less than i.