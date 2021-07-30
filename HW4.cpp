#include<iostream>

int main()
{

	const int VARCNT1 = 10;
	const int VARCNT2 = 20;
	const int SUMVARCNT = VARCNT1 + VARCNT2;
	int sw;
	int oddNum = 1;

	std::cout << "\nEnter a task number. To break type the STOP word:\n";
	std::cin >> sw;


	switch (sw) 
	{



		//Home Work 4, Task 1
		case 1:

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

		break;



		//Home Work 4, Task 2
		case 2:

		if ((VARCNT1 == 10) && (VARCNT2 == 10) | (SUMVARCNT == 10))
			std::cout << "\n true \n";
		else
			std::cout << "\n fale \n";

		break;



		//Home Work 4, Task 3
		case 3:
		
		do
		{ 
		oddNum += 2; std::cout << "\nYour numbers " << oddNum;
		}

		while (oddNum <= 50);
						
		break;
	}
		
return 0;
}