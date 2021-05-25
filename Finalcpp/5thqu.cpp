// Make a program that constructs is the binary file with the givennested structure[30pts]. the given structure must be used in your program.
/* const unsigned short N=5;
struct Scores{
  double sc[N];
  string grade;
  };
struct Grade{
  string first;
  string last;
  string ssn;
  Scores score;
};
Grade g;

*/
// grades.txt: the text file that contains the names ,SSN, 5 scores, and grade. this file has a total of 16  lines and each line is sperated by delimiter ',';
//https://github.com/Kwooley/CSO1/blob/master/final/grades.txt
// grades.bin: the binary file that consist of the binary data for structure "Score". this file should be made by your program and it must hae the exact 16 records for the structure Score.

// in your program,
//[step1] Read one line from "grade.txt" file
//[step2}] Split the line in to 8 field
//[step3] Fill the member varaibles of the structuer "Score".
//[step4]Write the structure in to the binary file "grade.bin".

//[test] download the test program and store it in the same directory with the file "grades.bin".
//compile and run the test program. the test program is supposed to print out all records from your binary file "grade.bin". Run this program and check out your result.

//https://github.com/Kwooley/CSO1/blob/master.final.q5test.cpp

// Chapter 12. Advanced File Operations
// Lab 12-1. MakeBinFile


#include	<iostream>
#include 	<fstream>
#include	<sstream>
#include	<string>
#include <iomanip>
using  namespace	std;

struct Namerecords {
	string	stname;
	string 	sex;
	int 	year;
	string 	name;
	int 	count;
};

void 	printNameRecords(Namerecords);
int		makeBinFile(void);


int		main()
{
	int		numrec;
	numrec = makeBinFile();
	cout << "Total " << numrec << " name records are created in the \"namerecords.bin\" file.\n" ;
}

int		makeBinFile(void)
{

	ifstream	ifso;
	ofstream	ofso;
	Namerecords nr;
	string 		buf, field;
	int			i=0, fcnt=0;
	stringstream ss;

	ifso.open("allstates.txt", fstream::in);
	ofso.open("namerecords.bin", fstream::out);
	if (!ifso || !ofso ){
		cout << "Open Error\n";
		exit(0);
	}

	while(ifso >> buf) {
		ss << buf;
		while(getline(ss, field, ',')) {
			switch(fcnt){
				case 0:
						nr.stname = field;
						break;
				case 1:
						nr.sex = field;
						break;
				case 2:
						nr.year = stoi(field);
						break;
				case 3:
						nr.name = field;
						break;
				case 4:
						nr.count = stoi(field);
						break;
			}
			fcnt = ++fcnt % 5;
		}
		ss.clear();
		ofso.write((char *)&nr, sizeof(nr));
		cout << i << "::" << sizeof(nr) << " bytes writing " ;
		printNameRecords(nr);
		i++;
	}
	return i;
}
void 		printNameRecords(Namerecords nr)
{
		cout << setw(5) << nr.stname << "\t";
		cout << setw(3) << nr.sex << "\t";
		cout << setw(5) << nr.year << "\t";
		cout << setw(10) << nr.name << "\t\t";
		cout << setw(5) << nr.count << endl;
}