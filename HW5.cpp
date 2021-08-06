#include <iostream>
#include <cstdlib>
#include <ctime> 

const int arrSzCnst = 8; 
 


//Home Work 5, Task 1.


double arrDubFun( double * arDub, short arrSz )
{
	int i;

	double x = rand() % 1000;
	arDub;
	for (i = 0; i < arrSz; i++)
		arDub[i] = { x };
	return 0;
}

int main()
{

	int i;

	double someArr[arrSzCnst] = { arrDubFun(someArr, arrSzCnst) };

	for (i = 0; i < arrSzCnst; i++)

		std::cout << someArr[i];
	std::cout << "\n";


	// Home Work 5, Task 2.


	uint16_t arr8[arrSzCnst] = { 0, 0, 1, 0, 0, 1, 0, 0 };

	for (i = 0; i < arrSzCnst; i++)

		std::cout << arr8[i]; // orign array output
	std::cout << "\t"; // some space between outputs

	for (i = 0; i < arrSzCnst; i++)

		arr8[i] == 0 ?
		(std::cout << ++arr8[i]) : (std::cout << --arr8[i]); // ternar for reversing orign array and instant output the result 

	return 0;
}