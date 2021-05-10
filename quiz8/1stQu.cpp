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
  int cnt=0;
  string str1 = "th";
  string substring;
  string line;
  ifstream filename("python.txt");
  if (filename.is_open())
  {
    while(getline(filename, line))
    {
      cout <<  line  << endl;
    }


    if ((str1 =line.length)
    {
      cnt+=1;
    }
    cout << cnt << endl;
  }
  else 
  {
    cout << "file open successful: " << endl;
  }
  cin.get();
  cin.get();
  /*string substring = "th";
  char filename[] = ifso.open("python.txt");
  if (ifso.fail)
  {
    cout << "Filed to open file %s " << filename << endl;

  
    while ( (getline ("python.txt") )
    {
      if ((find(substring, 0) == filename ))
      {
        cout << "substring prensent at line: " << line << endl;
      }
      line++;
    }
  }

  //string x; // declarring the variable to save "th" extract from substring.

  //bool ans = false;
  //int line =1;

  else 
    cout << "Unable to open file: " << endl;
  if (!ans)
  cout << "substring not present : " << endl;

  return 0;*/
}
