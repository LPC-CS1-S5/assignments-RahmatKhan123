/*
Make the program that counts the number of words that include the substring “th”.
 

In this program, we are going to count the occurrence of “th” in the paragraph.  We use the paragraph as follows, which is saved as a file with the name “python.txt”.

“The Python 2 language was officially discontinued in 2020 (first planned for 2015), and Python 2.7.18 is the last Python 2.7 release and therefore the last Python 2 release. No more security patches or other improvements will be released for it. With Python 2's end-of-life, only Python 3.5.x and later are supported. thither“

 

In order to count the number of occurrences of the keyword, we can use any kind of member function from the String class. All occurrences in a word should be counted as separate occurrences. For example, "thither" has two "th" substrings.

[Credits]

Program Correctness: 7 pts
Elaboration on algorithms and program design: 3pts
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
  ifstream file;
  int cnt = 0;
  char th[] = "th";
  ifs.open("python.txt")
  if(ifs)
  {
    while(ifs>>(char th[]))
    {
      if(strcmp("python.txt", th[]) == true)
      {
        cout << " th : found in file: " << endl;
      }
      cnt +=1;
    }
  }
  file.close();
}