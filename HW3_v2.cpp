#include <iostream>

int main()
{
	using std::cout;
	using std::endl;
	using std::cin;


	// Home Work 3, Task 1


	const int a = 1;
	const int b = 6;
	const int c = 3;
	const int d = 5;

	float Result = a * (b + (static_cast <float> (c) / d));

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;

	cout << "a * (b + (c / d)) = ";
	cout << Result << endl;


	// Home Work 3, Task 2


	int Num, Ternar;
	cout << "Enter a number (0 - 255):\n";
	cin >> Num;
	Ternar = (Num <= 21) ? 21 - Num : 21 + Num;
	cout << Ternar << endl;


	// Home Work 3, Task 3*


	int cube[3][3][3] = {
	{ {a,b,c}, {b,c,d}, {d,a,d} }, 
	{ {a,b,c}, {a,c,d}, {d,a,c} }, 
	{ {a,b,c}, {b,c,d}, {a,a,d} }
	};
	int* pCntr = nullptr;               // Declarating a pointer, initialize `em with nullptr (= 0). Denomination. Разименовывание.
	pCntr = &cube[1][1][1];		   // Declarating an address. It may be address of virible, in this case it is address of array.
	int cntr = *pCntr;			   // A value of the pointer is entered into the variable.
	cout << "\nCube center is " << cntr << endl;


	// Home Work 3, Task 4**

	 
	extern uint16_t q;
	extern uint16_t w;
	extern uint16_t e;
	extern uint16_t r;


	float extResult = q * (w + (static_cast <float> (e) / r));

	cout << "a * (b + (c / d)) = ";
	cout << extResult << endl;


	return 0;
}
