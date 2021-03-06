#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <iomanip>
#include "Student.h"
#include "ageCalc.hpp"


using namespace std;

const int SIZE = 100;

int main(){
	fstream fs;
	Student * stuArr[SIZE];
	Student * stuTarg;
	int stu = 0;
	for(int i = 0; i < SIZE; i++){
		stuArr[i] = nullptr;
	}
	fs.open("a2data.input", ios::in);
	if(fs.is_open()==false){
		cout << "File unsuccessfully opened" << endl;
		exit(4);
	}
	while(!fs.eof()){
		stuArr[stu] = new Student();
		char fileEntry[53];
		fs.read(fileEntry,52);
		fileEntry[53] = '\0';
		char firstName[11];
		for(int i = 0; i < 10; i++){
			firstName[i] = fileEntry[i];
			if(fileEntry[i] == ' '){
				firstName[i] = '\0';
				break;
			}
		}
		stuArr[stu]->firstName = firstName;
		//cout << stuArr[stu]->firstName;

		char middleInit[1];
		middleInit[0] = fileEntry[10];
		middleInit[1] = '\0';
		stuArr[stu]->middleInit = *middleInit;
		//cout << stuArr[stu]->middleInit << " ";
		char lastName[20];
		for(int i = 20, j = 0; j < 20; i++, j++){
			lastName[j] = fileEntry[i];

			if(lastName[j] == ' '){
				lastName[j] = '\0';
				break;
			}
		}
		stuArr[stu]->lastName = lastName;
		//cout << stuArr[stu]->lastName;
		char campusCode[1];
		campusCode[0] = fileEntry[40];
		campusCode[1] = '\0';
		stuArr[stu]->campusCode = *campusCode;
		//cout << stuArr[stu]->campusCode << " ";
		char studentID[9];
		for(int i = 41, j = 0; j < 8; i++, j++){
			studentID[j] = fileEntry[i];
			//cout << studentID[j];
		}
		studentID[9] = '\0';
		stuArr[stu]->studentID = studentID;
		char age[4];
		for(int i = 50, j = 0; j < 2; i++, j++){
			age[j] = fileEntry[i];
			//cout << age[j];
		}
		age[4] = '\0';
		stuArr[stu]->age = atoi(age);
		stu++;
	}

	stu = 0;
	cout << "Last Name" << '\t' << "MI" << '\t' << "First Name"<< '\t' << "Campus Code" << '\t'<< "Student Sequence" << '\t' << "Age" << endl;
	cout << "===================================================================================================" << endl;
	while(stuArr[stu]!=nullptr){
		cout << stuArr[stu]->lastName << setw(5) <<  '\t' << stuArr[stu]->middleInit << '\t' << stuArr[stu]->firstName << setw(7) << '\t' << stuArr[stu]->campusCode << setw(8) << '\t' << stuArr[stu]->studentID << setw(8) << '\t' << stuArr[stu]->age << endl;

		stu++;
	}
	int average = ageCalc(stuArr, stuTarg);
	fs.close();

	return 0;
}


