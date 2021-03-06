#include "Student.h"

Student::Student()
{
	this->name = "undefined";
	this->gender = "undefined";
	this->date_of_birth = "undefined";
	this->group = 0;
	this->average_score = 0.0;
}

std::ostream& operator <<(std::ostream& os, const Student& b)
{
	os << "Student's name: " << "\t\t" << b.name << "\nStudent's gender: ";
	os << "\t\t" << b.gender << "\nStudent's date of birht: " << "\t" << b.date_of_birth << "\nStudent's group: " << "\t\t" << b.group;
	os << "\nStudent's average score: " << "\t" << b.average_score << "\n";

	return os;
}

std::istream& operator >>(std::istream& is, Student& b)
{
	std::cout << "\nName: ";
	is >> b.name;
	std::cout << "\n" << "Gender: ";
	is >> b.gender;
	std::cout << "\n" << "Date of birth: ";
	is >> b.date_of_birth;
	std::cout << "\n" << "Group: ";
	is >> b.group;
	std::cout << "\n" << "Average score: ";
	is >> b.average_score;
	std::cout << "\n\n";
	return is;
}