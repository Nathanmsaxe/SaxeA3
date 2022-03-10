/*
 * ageCalc.cpp
 *
 *  Created on: Mar 9, 2022
 *      Author: Nathan Saxe
 */

#include "Student.h"
#include "ageCalc.hpp"
#include <iostream>

int ageCalc(Student * stuArr[], Student * &stu){
	int averageAge;
	//Student * bananas = stu;
	//cout << "TEST" << endl;
	int i = 1;
	averageAge += stuArr[0]->age;
	while(stuArr[i]!=nullptr){
		cout << "TEST" << endl;
		averageAge += stuArr[i]->age;
		//cout << "TEST" << endl;
		if(stuArr[i]->age<stuArr[i-1]->age){
			cout << "TEST" << endl;
			stu->firstName = stuArr[i]->firstName;

			stu->age = stuArr[i]->age;
		}
		i++;
	}
	averageAge = averageAge/i;
	cout << "Average Age:";
	return static_cast<int>(averageAge);
}





