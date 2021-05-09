/*Programming Lab 10-2
We are going to make a program that finds the name with “case non-sensitive search” in the file "ny2018.txt"
Find the user input string in the file "ny2018.txt"
When we read the string "Mary"  from the file and the user input is the "mar", "ar" or "ry"
print "partial match"
"Mary" and "mary"
print "exact match"
 All strings in this lab must be "C-String", not the string class.
Download the file "ny2018.txt" from the   https://github.com/Kwooley/CS01/blob/master/ch10/ny2018.txt 
 Open and read the file
Compare all the lines read from the file and the user input string.
Find the exact and partial match with the user input.
*/


#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>
using namespace std;

void tolowerstring(char []);
bool exactmatch(char [], char[]);
bool partialmatch(char [], char[]);

int main()
{
  ifstream ifso;
  char name[20];
  char readline[20], userinput[20];

  cout << "Enter your input\n";
  cin  >> userinput;

  tolowerstring(userinput);
  ifso.open("ny2018.txt", fstream::in);
  if (ifso){
      while( ifso >> readline){
          tolowerstring(readline);
          if (exactmatch(readline, userinput))
              cout << "Exact match found " << readline << endl;
          else if (partialmatch(readline, userinput)) 
              cout << "Partial match found " << readline << " includes" << userinput << endl;
      }
  }
}

void tolowerstring(char str[])
{
  for(int i = 0; i < strlen(str); i++)
  {
    if(isupper(str[i]))
      str[i] = tolower(str[i]);
  }
}

bool exactmatch(char readline[], char userinput[])
{
  if (strcmp(readline, userinput) == 0)
    return true;
  else 
    return false;
}

bool partialmatch(char readline[], char userinput[])
{
  char *pos;
  pos = strstr(readline, userinput);
  if(pos)
    return true;
  else 
    return false;
}