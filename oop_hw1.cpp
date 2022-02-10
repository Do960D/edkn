#include <iostream>
#include <cstdint>

//TASK 1

class Power {

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

class RGBa {

private:

	uint8_t m_red;
	uint8_t m_green;
	uint8_t m_blue;
	uint8_t m_alpha;


public:

	RGBa() : m_red (0), m_green (0), m_blue (0), m_alpha (255)
	{
		m_red;
		m_green;
		m_blue;
		m_alpha;
	}

	void print( uint8_t m_red = 0, uint8_t m_green = 0, uint8_t m_blue = 0, uint8_t m_alpha = 255)
	{
		std::cout << m_red << m_green << m_blue << m_alpha;
	}


};


//TASK 3

class Stack {

private:

	size_t size = 10;
	
	int* privateArray = new int[size];


public:

	void reset() 
	{
		for (size_t i = 0; i < size; ++i)
			privateArray[i] = 0;		
			
		size = 0;

		std::cout << "Stack is reseted!\n";

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

		std::cout << "POP is running! \n";

		for (size_t i = size-1; i > 0; --i)
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

		std::cout << std::endl;
	}

	void print() 
	{
		std::cout << "\nPrint in progress: \n";

		for (size_t i = 0; i < size; ++i)
		{
			if (privateArray[i] == 0)
				break;

			std::cout << privateArray[i] << "\n";
		}

		std::cout << "End of array!\n" << std::endl;
	}
};


int main()
{

	//// TASK 1

	Power orignOne;

	orignOne.setVar(5, 10);
	std::cout << orignOne.calculate() << std::endl;

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



