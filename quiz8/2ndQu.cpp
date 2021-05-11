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
int splitemail(const char[], char[][100], char)

int main()
{


}
//The id of the email must be starting with the alphabet characters
////The length of id must be greater than 5 and less than 15
bool emailcheck(char email[]);
{
  char emaillen = 15;
  
  int i = 0;
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
  res = strstr(domian, email+i+1);
  if (res)
    return true;
  else 
    return false;
}
//The program asks for the user email string and then split the id, organization name, and domain name. After that, check the validity of the email string base on the above requirements.


/*int emailSplit(const char email[], char dest[][100], char delimiter)
{
	int i=0, j=0, cnt=0;
	while( email[i] != '\0'){ 
		dest[cnt][j++] = source[i] ;
		if ( source[i] == delimiter){
			dest[cnt][j-1] = '\0';
			cnt++;
			j = 0;
		}
		i++;
	}
	dest[cnt][j] = '\0';
	if ( j==0)
		cnt--;
	return cnt+1;
}







	