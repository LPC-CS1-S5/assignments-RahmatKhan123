#include <iostream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;
int countoccerrences(char *str, string word);
int main()
{
  char str[] = "Lorem ipsum dolor amet consectetur adipiscing elit. Quibus natura iur a responderit non esse verum aliunde finem beate vivendi, a se principia rei gerendero peti; Qu ae enim adhuc protulist, popularia sunt, engo autem a te elegantiora desidero. Duo reges; cons tructio interrete. Tum Lucius: Mihi vero ista valde probata sunt, squad item fratri puto. nestiarum vero nullum iudicium puto. Nihil enim iam habes, quod ad corpus referas; Deinde prima illa, quae in congressu solemus: Quid tu inquit tu inquit, huc? Et homint, qul ceteris animantibus plurimum praestat, praecipue a natura nihil datum esse dicemus?" ; 

  string userinput;
  char occures;

  cout << "Enter a string from the str array, i will count the occurrences: " << endl;
  cin >> userinput;

  cout << "the number of your word occurrence count is: " << countoccerrences(str, userinput);
}

int countoccerrences(char *str, string userinput)
{
  char *p;
   //splitting the string by spaces in a
  vector<string> a;

  p = strtok(str, " ");
  while (p != NULL)
  {
    a.push_back(p);
    p = strtok(NULL, " ");
  }
   //searching for pattern in a
  int c = 0;
  for(int i = 0; i < a.size(); i++)
  {
     // if match found increase count
    if(userinput == a[i])
      c++;
    
    return c;
  }
}

 








//Make the program that counts the given word occurrences in the string "words" and elaborate on detailed algorithms.
// we will for the user input and save it till the "userinput". the string is as show bellow.
//string userinput;
//string words = "Lorem ipsum dolor amet consectetur adipiscing elit. Quibus natura iur a responderit non esse verum aliunde finem beate vivendi, a se principia rei gerendero peti; Qu ae enim adhuc protulist, popularia sunt, engo autem a te elegantiora desidero. Duo reges; cons tructio interrete. Tum Lucius: Mihi vero ista valde probata sunt, squad item fratri puto. nestiarum vero nullum iudicium puto. Nihil enim iam habes, quod ad corpus referas; Deinde prima illa, quae in congressu solemus: Quid tu inquit tu inquit, huc? Et homint, qul ceteris animantibus plurimum praestat, praecipue a natura nihil datum esse dicemus?";

//cout << "Enter user string";
//cin >> userinput;


// in this program, if the given word is even a sub-string of the original word, we will count it.

// for example: the given word is "some"and the original word is "something" we will count as a word occurrence.

// if the given word occures several times in an original word, we will count all occurrences.
 
 //for example, the given word is "ch" and the original word is "church", we will count all occurrences

 // in the main function we will cal a function to find the occurrences and then receive the total occurrences from that function, and then the return result will be printed in the main function. */

 