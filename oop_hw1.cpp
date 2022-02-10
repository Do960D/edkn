#include <iostream>
#include <cstdint>
#include <cmath>

//TASK 1

class Power {

public:

	void setVar(float var1, float var2)
	{
		m_var1 = var1;
		m_var2 = var2;
	}

	void calculate(float num = 2, float pwr = 3)
	{
		std::cout << pow(num, pwr);
	}


private:

	float m_var1, m_var2;

};

//TASK 2

class RGBa {

public:

	RGBa ( ) : m_red (0), m_green (0), m_blue (0), m_alpha (255)
	{
		
	}

	void print()
	{
		uint16_t red = static_cast <uint16_t> (m_red);
		uint16_t green = static_cast <uint16_t> (m_green);
		uint16_t blue = static_cast <uint16_t> (m_blue);
		uint16_t alpha = static_cast <uint16_t> (m_alpha);

		std::cout << "\n\n" << red << ", " << green << ", " << blue << ", " << alpha << "\n";
	}

private:

	uint8_t m_red, m_green, m_blue, m_alpha;

};


//TASK 3  

class Stack {

public:

	void reset() 
	{
		for (size_t i = 0; i < size; ++i)
			privateArray[i] = 0;		
			
		size = 0;
	}

	bool push(int x)
	{
		bool isFull = false;

		if (size == 0)
		{
			size = 10;

			for (size_t i = 0; i < size; ++i)
				privateArray[i] = 0;
		}

		for (size_t i = 0; i < size; ++i)
		{
			if (privateArray[i] != 0)
				++i;

			if (privateArray[i] == 0)
			{
				privateArray[i] = x;
				break;
			}

			
			if (i == size && privateArray[i] != 0)
				isFull = true;
		}

		return isFull;
	}

	void pop()
	{
		size_t i;
		size_t emptyness = 0;

		for (size_t i = size-1; i >= 0; --i)
		{
			if (privateArray[i] != 0)
			{
				privateArray[i] = 0;
				break;
			}

			else 
				++emptyness;
		}

		if (emptyness == size)
			std::cout << "Stack is empty!";
	}

	void print() 
	{
		std::cout << "\nprint array: ";
		for (size_t i = 0; i < size; ++i)
		{
			if (privateArray[i] == 0)
				break;

			std::cout  << privateArray[i] << "";
		}
	}

private:

	size_t size = 10;

	int* privateArray = new int[size];

};


int main()
{

	 //TASK 1

	Power orignOne;

	orignOne.setVar(5, 10);
	orignOne.calculate();

	//TASK 2

	RGBa monitor;

	monitor.print();

	//TASK 3

	Stack stack;
	stack.reset();
	stack.print();

	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();
	stack.print();

	
}



