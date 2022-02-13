#include <iostream>
#include <string>

class Person {
public:

	Person(short age,short weight, uint8_t sex, std::string name) 
	{
		this->age;
		this->weight;
		this->sex;
		this-> name;
	}

	void setName(std::string name) 
	{
		this -> name = name;
	}

	void setWeightAge (short weight, short age) 
	{
		this -> weight = weight;
		this -> age = age;
	}

private:
	std::string name;
	uint8_t sex;
	short age, weight;

};

class Student : public Person {
public:

	Student(short age, short weight, uint8_t sex, std::string name)
	{
		this->id++;
		this->studYear = studYear;
	}

private:

	short studYear, id = 0;

};

void main() 
{
	Person test;
	test.setName("test");
	test.setWeightAge(70, 25);


}