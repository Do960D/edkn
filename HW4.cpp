#include<iostream>

int main() 
{


//Home Work 4, Task 1

	uint16_t num1, num2, sum;
	
	std::cout << "\nEnter a number \n";
	std::cin >> num1;
	
	std::cout << "\nEnter a number \n";
	std::cin >> num2;

	sum = num1 + num2;

	if (sum >= 10 && sum <= 20)
	{
		std::cout << "True";
	}
	else { std::cout << "False"; };


//Home Work 4, Task 2


	const int CON1 = 10;
	const int CON2 = 20;
	const int sumSum = CON1 + CON2;

		switch (sumSum)
		{ 
		case CON1 == 10:
			std::cout << "1";
			break;

		case CON2 == 10:
			std::cout << "2";
			break;

		case sumSum = 10:
			std::cout << "3";
			break;




return 0;
}