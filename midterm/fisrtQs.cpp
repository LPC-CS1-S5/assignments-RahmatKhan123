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
// it has 8 iteration.
// it work such as, when (i=0 J=0), (i =0 J=1) , (i = 0 J=2), (i = 0 J=3), i = 0 j = 4; iteration continue for the 1st line until j = 4, because j <M -i MEANS j < 5 -0 = j <4;
// so for 2nd line  i = 1 incremented by 1, j = 1, loops iterat until it meat the condition which is, j < M-i means j < M -1 = J < 4 SO J = 3;
 // AT THE 3RD LINE i = 2 incremented by 1. j = 2 as well and j < M - i means j < 5 - 2 = j < 3 which means j = 2;
 //so i =2 and j =2 is printed out
//at 3rd iteration for i incremented to 3. i = 3, j = 3, and the condtion becomes false because j<M-i = j < 5 - 3 mean j < 2 doesn't satisfy the condtion of the j = i; and loop terminate.
//so the is totlal of 8 iteration












// for each iteration of the nested loop
// 
//start print when both"i" and "j" are at zero.
//then print out 0 for i and j.
// then keeps print 0 for i until M is less i which is 4. because i is 5.
// the print 1 for i and print j until J is less then previews i which was 4, so j is print until 3.
// print 2 for i and 2 for j and loop terminate becuase j can not become less than i.