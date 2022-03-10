/*
 * Student.h
 *
 *  Created on: Mar 9, 2022
 *      Author: Nathan Saxe
 */

#ifndef SRC_STUDENT_H_
#define SRC_STUDENT_H_

#include <string>

using namespace std;

class Student {
public:
	string firstName;
	char middleInit;
	string lastName;
	char campusCode;
	string studentID;
	int age;
	Student();
};

#endif /* SRC_STUDENT_H_ */
