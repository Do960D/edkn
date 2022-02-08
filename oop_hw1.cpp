#include <iostream>

//TASK 1

class Power 
{
private:

	int m_var1;
	int m_var2;

public:

	void setVar(int var1, int var2) { m_var1 = var1; m_var2 = var2;}

	int calculate(int m_var1 = 2, int m_var2 = 3) 
	{
		int num = m_var1;
		int pow = m_var2;
		int result = 1;

		for (int i = 0; i < pow ; ++i)
		{
			result *= num;
		}
		return result;
	}
};

int main()
{
	Power orignOne;

	orignOne.setVar(5,10);
	std::cout << orignOne.calculate();
}

