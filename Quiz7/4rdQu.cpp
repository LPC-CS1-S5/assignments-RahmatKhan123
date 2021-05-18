/*Make the program that deletes one element in the Vector[10pts].
Complete the following function “deleteone()” to delete one element in the vector.
We have a vector with 20 elements. The elements in a vector can be duplicated. We are going to make the function “deleteone” that delete the element or elements that are the same value as the user input. In the function “deleteone()”, first we need to take one user input, and then delete all occurrences that are the same as the user input value. After deleting, print the message with the deleted counts and all elements in the vector.  Use the appropriate member functions of vector to find and delete the items in the vector.
[Program Requirements]
In your function “deleteone( )”, find the value to be deleted and then use the member function “erase( )” with the found index as a parameter.*/

#include	<iostream>
#include	<cstdlib>
#include	<ctime>
#include	<vector>
#include	<algorithm>
#include	<iterator>
using namespace std;

void makevector(vector<int> &, int);
void printvector(vector<int>);
void deleteone(vector<int> &);
int main()
{
	vector<int> number;
	int 	size = 20;
	srand(time(0));
	makevector(number, size);
	printvector(number);
	deleteone(number);
}
void makevector(vector<int> &vec, int size)
{
	for(int i=0; i<size; i++)
    vec.push_back(rand() % 10);
}
void printvector(vector<int> vec)
{
	for(int v : vec)
    cout << v << "\t";
	cout << endl;
}
void deleteone(vector<int> &vec)
{
  int usernum, deletecnt=0;
  cout << "Please Input a number: " << endl;
  cin >> usernum;
  vector<int>::iterator iter;
  for (iter = vec.begin(); iter != vec.end(); iter++)
  {
    if (usernum == *iter)
    {
      vec.insert(iter, usernum);
    }

    else if (iter = find(vec.begin(), vec.end(), usernum))
    {
      if (iter == usernum)
        vec.erase(iter);

    }
    deletecnt ++;

  }
  cout << usernum << "is deleted " << deletecnt << " times \n";
	printvector(vec);
	
}




