#pragma once
#include <iostream>
#include <string>


class Student
{
public:
	Student();

	friend std::ostream& operator <<(std::ostream& os, const Student& b);
	friend std::istream& operator >>(std::istream& is, Student& b);

private:
	std::string name;
	std::string gender;
	std::string date_of_birth;
	int group;
	double average_ball;
};