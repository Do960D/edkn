#include <iostream>

short i;
const short arrSz = 8;

short stufferFun() 
{

short x = x + 3;

return 0;
}




int main()
{
//Home Work 5, Task 1.





// Home Work 5, Task 2.

	short arr8[arrSz] = { 0, 0, 1, 0, 0, 1, 0, 0 };
	for (i = 0; i < 8; i++)
	arr8[i] == 0 ? (std::cout << ++arr8[i]) : (std::cout << --arr8[i]);

//Home Work 5, Task 3.

	short arrNew[arrSz] = {};

	do (x = 1, arrNew[i] = stufferFun());
	while (arrNew[i] == arrSz);

	for (i = 0; i < 8; i++)
	std::cout << arrNew[i];

return 0;
}