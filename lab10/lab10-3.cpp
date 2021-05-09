/*3. Programming Lab 10-3
We are going to make a program that checks the valid string for email string.
Condition for the email string.
Email ID must start with the alphabet.
All characters in ID are all alphanumeric characters and the length must be less than 10.
The last string of domain should be one of the list {com, edu, org, and net}
bool  idcheck(char []);
bool  domaincheck(char []);*/
// Condition for the email string.
// start with the alphabet.
// ID characters are all alpha numerics characters
// the last string shoud be one of the list {com, edu, org, and net}
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

bool idcheck(char []);
bool domaincheck(char []);

int main()
{
  char email[20];

  cout << "Enter your email \n";
  cin >> email;

  if( idcheck(email))
    cout << "ID check passed\n";
  else 
    cout << "you Id must start with aphabet char: \n";
    cout << "Your id must contain alphanumeric: \n";
    cin >> email;
  if( domaincheck(email))
    cout << "Domain check passed\n";
  else 
    cout << "your domain must end with .com, or, .net, or, .gov, or, .edu: \n";

}
bool idcheck(char email[])
{
  char emaillen = 10;
  int i = 0;

  if (isalpha(email[0]))
    return true;
  else 
    return false;
  while(email[i] != '@')
  {
    if(isalnum(email[i++]))
      continue;
    else 
      return false;
  }
  if (i <=emaillen)
    return true;
  else 
    return false;
}
bool domaincheck(char email[])
{
  char domainstr[] = "com, edu, gov, net";
  char *res;
  int length, i;

  length = strlen(email);
  i = length -1;
  do 
  {
    if(email[i] == '.')
      break;
  }while(i-- > 0);
  res = strstr(domainstr, email+i+1);
  if(res)
    return true;
  else 
    return false;
  
}
