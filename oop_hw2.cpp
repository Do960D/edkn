#include <iostream>
#include <string>

class Human {
public:

	Human(std::string name, uint8_t sex, short age, short weight)
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
	uint8_t m_sex;
	short m_age, m_weight;
};

class Person : public Human {
public:

	Person(std::string name, uint8_t sex, short age, short weight,short studYear) 
	{
	
	}

private:

	short studYear, id;

};

int main() 
{
	
	return 0;
}
