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
#include <cstring>
#include <cctype>
#include <fstream>
using namespace std;
int main()
{
  fstream ifs;
  ifs.open("python.txt");
  if(!ifs)
  {
    cout << "File Open Error!: " << endl;
    exit(0);
  }
  int count = 0;
  //char th;
  string word;
  while(ifs >> word)
  {
    //char start;
    //int wordcount = 0;
    //if( (wordcount.find(th) == wordcount.end())
    //{
    //wordcount[th] +=1;
    //}
    //ifs.getline(th);
    //cout << th;
    cout << " th " << th << "has " << th.length() << " has" << th << endl;
    count++;
  }
  //cout << " the number of : th : is : " << count << endl;
  
  ifs.close();
}