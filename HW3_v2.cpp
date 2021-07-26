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


	int cube[3][3][3] = { {a,b,c}, {b,c,d}, {d,a,d} }, { {a,b,c}, {b,c,d}, {d,a,d} }, { {a,b,c}, {b,c,d}, {d,a,d} }, ;
	int* pCntr = nullptr;               // Declarating a pointer, initialize `em with nullptr (= 0). Denomination. Разименовывание.
	pCntr = &cube[1][1][1];		   // Declarating an address. It may be address of virible, in this case it is address of array.
	int cube = *pCntr;			   // A value of the pointer is entered into the variable.
	cout << "\nCube center is " << cube << endl;


	// Home Work 3, Task 4**

	 
	extern int16_t si = 65.535;
	extern uint32_t i = -2'000'000;
	extern float pi = 3.14f;
	extern double dbl = 5.135326211342154345124;

	float Result = si * (i + (pi / dbl));

	cout << "a * (b + (c / d)) = ";
	cout << Result << endl;


	return 0;
}
