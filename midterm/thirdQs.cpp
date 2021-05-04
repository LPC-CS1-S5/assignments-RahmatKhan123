/*[3] Make the program that writes the numbers into the file “numbers.txt”.
We are going to make N(defined as 10) random numbers that should be between 1 to 50. When each number is generated, we check the number that is greater than the preceding number. If so, the number will be written into the file "numbers.txt".
For example, we assume that there are 10 numbers: 10 5 6 8 3 25 15 10 45 30.
In this example, we need to write 6 8 25 45 into a file.
We will skip the first number because there is no preceding number.*/
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int getRdnum(void)
{
  rdnum = rand() % 50;
  for (int i = 0; i < 10; i++)
  int rdnum;
  {
    rdnum = (rand() % 50) + 1;
    cout << rdnum << endl;
  }
}
//in the getRdnum function, by using the built in rand() % 50 generat randum numbers. i use the rdnum variable to save the randum numbers. and used the varaible rdnum that i initialized in main(){} function like rdnum = (rand() % 50 ) + 1 to generate number from 1 to 50;
int isGreater(int &n)
{
  static int perc = 0;
  if (perc ==0)
  {
    perc = n;
    return (0);
  }
  if( perc < n)
  {
    perc = n;
    return(1);
  }
  else
  {
    perc = n;
    return(0);
  }

// in the isGreater function i used a refrence varaible n to hold the value of the randum numbers  that initialized at main(){} funciton; 
// the static int perc = 0 to hold the comparison of the randum numbers we arrange the randum number from smalled to largest from left to right except the first one.
// the first condtion is if perc = 0, is used to skip the fisrt randum number because there is no perceding number to it to compare it.
// the second if statement checks if perc < n, by using the refrence varaible we refer to randum numbers checks if the randum number greater then perc then perc = n and return n as true and print out randum number;
// else statment checks that if perc=n retrun 0

}
int getRdnum();
int isGreater(int &);
int main()
{

  int rdnum, i = 10, j = 10;
  ofstream ofs;
  ofs.open("numbers.txt");
  if(ofs.fail())
  {
    cerr << "Error! can not open file:" << endl;
    exit(0);
  }
  while (i < 10)
  {
    rdnum = getRdnum();
    j = isGreater(rdnum);

    if (j == 1)
    {
      ofs << rdnum << endl;
    }
  }
}


//in the getRdnum function, by using the built in rand() % 50 generat randum numbers. i use the rdnum variable to save the randum numbers. and used the varaible rdnum that i initialized in main(){} function like rdnum = (rand() % 50 ) + 1 to generate number from 1 to 50;

// in the isGreater function i used a refrence varaible n to hold the value of the randum numbers  that initialized at main(){} funciton; 
// the static int perc = 0 to hold the comparison of the randum numbers we arrange the randum number from smalled to largest from left to right except the first one.
// the first condtion is if perc = 0, is used to skip the fisrt randum number because there is no perceding number to it to compare it.
// the second if statement checks if perc < n, by using the refrence varaible we refer to randum numbers checks if the randum number greater then perc then perc = n and return n as true and print out randum number;
// else statment checks that if perc=n retrun 0


//in the main i created the txt.file by using the built in functions for the number be writen in to it. 
//then used a while loop to check the random number that are created are 10 of them and place rdnum to the function of getRdnum(); by using varaible i I CHEKC to see that 10 random numbers are generated. and placed j = isGreater(); to check if j == 1 means if the random numbers functions is true write it the the file. 


















