/*1. Programming Lab 10-1
We are going to make a program that checks a strong password. In this lab, all string must be the "C-string", not the string class. In our program, the password requirement for strong security is as follows:
Its length is at least 6
It contains at least one digit.
It contains at least one lowercase alphabet.
It contains at least one uppercase alphabet.
It contains at least one special character. The special characters are: !"#$%&'()*+,-./  { }~  :;<=>?@
All characters that have true as a result of the function ispunct( )*/

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


bool checklength(char []);
bool checkdigit(char []);
bool checklower(char []);
bool checkupper(char []);
bool checkspecial(char []);

int main()
{
  char    pwdstr[20];

  cout << "Enter your password\n";
  cin >> pwdstr;

  if (checklength(pwdstr) &&
      checkdigit(pwdstr) &&
      checklower(pwdstr) &&
      checkupper(pwdstr) &&
      checkspecial(pwdstr))
      {
        cout << "Your password is strong\n";
      }
  else 
  {
    cout << "Your password in not strong enough\n";
  }
}


bool checklength(char pwdstr[])
{
  if (strlen(pwdstr) >= 6)
    return true;
  cout << "Your password must be 6 character long: \n";
  return false;
}

bool checkdigit(char pwdstr[])
{
  for(int i =0; i < strlen(pwdstr); i++)
  {
    if(isdigit(pwdstr[i]))
    {
      return true;
    }
  }
    cout << "Your password must have a digit 0 to 9; \n";
    return false;
}

bool checklower(char pwdstr[])
{
  for(int i = 0; i < strlen(pwdstr); i++)
  {
    if(islower(pwdstr[i]))
    {
      return true;
    }
  }
  cout << "Your password must have a lowercase letter \n ";
  return false;
}

bool checkupper(char pwdstr[])
{
  for (int i = 0; i < strlen(pwdstr); i++)
  {
    if(isupper(pwdstr[i]))
    {
      return true;
    }
  }
  cout << "Your Password must have a uppercaser letter \n ";
  return false;

}
bool checkspecial(char pwdstr[])
{
  for (int i = 0; i <strlen(pwdstr); i++)
  {
    if (ispunct(pwdstr[i]))
    {
      return true;
    }
  }
  cout << "Your password must have a special symbol: \n";
  return false;
}