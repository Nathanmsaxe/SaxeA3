/*
 * ageCalc.cpp
 *
 *  Created on: Mar 9, 2022
 *      Author: Nathan Saxe
 */

#include "Student.h"
#include "ageCalc.hpp"
#include <iostream>

int ageCalc(Student *stuArr, Student * stu){
	int averageAge;
	Student * bananas = stu;
	for(unsigned int i = 0; i < sizeof(stuArr); i++){
		averageAge += stuArr[i].age;
		if(stuArr[i].age<stuArr[i-1].age){
			stu->firstName = stuArr[i].firstName;
			stu->age = stuArr[i].age;
		}
	}
	averageAge = averageAge/sizeof(stuArr);
	cout << "Average Age:";
	return averageAge;
	cout << "Lowest Age:";
	return  bananas->age;
}




