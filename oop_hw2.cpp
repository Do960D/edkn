#include <iostream>
#include <string>

class Person {
public:

	Person(std::string name, char sex, short age, short weight)
	{
		m_name = name;
		m_sex = sex;
		m_age = age;
		m_weight = weight;
	}

	void setName(std::string name) 
	{
		m_name = name;
	}

	void setWeightAge (short weight, short age) 
	{
		m_weight = weight;
		m_age = age;
	}

private:
	std::string m_name;
	char m_sex;
	short m_age, m_weight;
};

class Student : public Person
{
public:

	Student (std::string name, char sex, short age, short weight, short studYear) : Person( name, sex, age, weight)
	{

		++count;
	}	

	void showId() 
	{ 
	std::cout << count << std::endl; 
	}

private:
	static int count;
};

int main() 
{	
	int Student::count

	Student Test1{ "Test1", 'F', 77, 19, 2021 };
	Student Test2{ "Test2", 'M', 150, 15, 2021 };
	Student Test3{ "Test3", 'F', 77, 19, 2021 };

    Test1.showId();
	Test2.showId();
	Test3.showId();

	return 0;
}
