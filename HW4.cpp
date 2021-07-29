#include<iostream>

int main() 
{

	

	const int VARCNT1 = 10;
	const int VARCNT2 = 20;
	const int SUMVARCNT = VARCNT1 + VARCNT2;
	char sw;
	
	std::cout << "\nEnter a task number. To break type the STOP word:\n";
	std::cin >> sw; 
	while (sw != 'STOP')
	{

		//Home Work 4, Task 1
		if (sw == 1)
		{

			std::cout << "\nTask " << sw << " selected\n";


			int num1, num2, sum;

			std::cout << "\nEnter a number \n";
			std::cin >> num1;

			std::cout << "\nEnter a number \n";
			std::cin >> num2;

			sum = num1 + num2;

			if (sum >= 10 && sum <= 20)
				std::cout << "True";
			else
				std::cout << "False";

			std::cout << "\nEnter a task number. To break type the STOP word:\n";
			std::cin >> sw;
			continue;
		}

		

		//Home Work 4, Task 2
		if (sw == 2)
		{

			std::cout << "\nTask " << sw << " selected\n";



			std::cout << "variant 1 - if else";

			if ((VARCNT1 == 10) && (VARCNT2 == 10) | (SUMVARCNT == 10))
				std::cout << "\n true \n";
			else
				std::cout << "\n fale \n";

			std::cout << "variant 1 - ternar";
			(((VARCNT1 == 10) && (VARCNT2 == 10)) | (SUMVARCNT == 10)) ? std::cout << "\ntrue" : std::cout << "\nfalse";

			std::cout << "\nEnter a task number. To break type the STOP word:\n";
			std::cin >> sw;
			continue;
		}

	

		//Home Work 4, Task 3
		if (sw == 3)
		{
			std::cout << "\nTask " << sw << " selected\n";
			int oddNum = 1;
			do
			{
				std::cout << "\nYour numbers " << oddNum;
				oddNum += 2;
			} while (oddNum < 50);

			std::cout << "\nEnter a task number. To break type the STOP word:\n";
			std::cin >> sw;
		}

		//
		

		//ballcatch
		if ((sw != 1) | (sw != 2) | (sw != 3) | (sw != 4) | (sw != 5)) { continue; }
				 
	}


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