/*
Validate the email account[10pts]
We are going to make a program that checks the validity of the email accounts. The requirement of an email account is as follows:

emailid@organization.com

The id of the email must be starting with the alphabet characters
The length of id must be greater than 5 and less than 15
The domain name should be one of the list {com, org, edu, net, and gov}
The program asks for the user email string and then split the id, organization name, and domain name. After that, check the validity of the email string base on the above requirements.
*/
#include <iostream>
#include <cstring>
using namespace std;
bool emailcheck(char []);
bool domaincheck(char[]);

int main()
{
  char email[15];
  cout << "Enter yout email: " << endl;
  cin >> email;

  if(emailcheck(email))
    cout << "Email Check passed: " << endl;
  if (domaincheck(email))
    cout << "Domain Check Passed: " << endl;
}
//The id of the email must be starting with the alphabet characters
////The length of id must be greater than 5 and less than 15
bool emailcheck(char email[])
{
  char emaillen = 15;
  char len = emaillen;
  for (int i = 0; i < len; i++)
  {
    if (!isalpha(email[0]))
      return false;
    else 
      cout << "Your email must start with alphabet: \n";
      return true;
    if ((email[i] < 5) || ( email[i] > 15))
    {
      return false;
    }
    else 
      return true;
  }
}
//The domain name should be one of the list {com, org, edu, net, and gov
bool domaincheck(char email[])
{
  char domain[] = "com, edu, net, gov, org";
  char *res;
  int length, i;
  length = strlen(email);
  i = length -1;
  do 
  {
    if(email[i] == '.')
      break;
  }while(i-- > 0);
  res = strstr(domain, email+i+1);
  if (res)
    return true;
  else 
    return false;
}