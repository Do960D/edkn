#include <iostream>
#include <cstdint>

//TASK 1

class Power
{
private:

	int m_var1;
	int m_var2;

public:

	void setVar(int var1, int var2) { m_var1 = var1; m_var2 = var2; }

	int calculate(int m_var1 = 2, int m_var2 = 3)
	{
		int num = m_var1;
		int pow = m_var2;
		int result = 1;

		for (int i = 0; i < pow; ++i)
		{
			result *= num;
		}
		return result;
	}
};


//TASK 2


class RGBA
{

	std::uint8_t m_red, m_green, m_blue, m_alpha;

public:

	RGBA()
	{
		m_red = 0;
		m_green = 0;
		m_blue = 0;
		m_alpha = 255;
	}

	RGBA(int red, int green, int blue, int alpha)
	{
		m_red = red;
		m_green = green;
		m_blue = blue;
		m_alpha = alpha;

	}

	void print()
	{

		std::cout << m_red << m_green << m_blue << m_alpha;

	};

};


int main()
{

	// TASK 1

	Power orignOne;

	orignOne.setVar(5, 10);
	std::cout << orignOne.calculate();

	//TASK 2

	RGBA lightsUp;

	lightsUp();
	lightsUp(10, 10, 10, 150);
	lightsUp.print();

}



