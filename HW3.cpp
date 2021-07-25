#include <iostream>

int main()

{
using std::cout;
using std::endl;
using std::cin;

//Home Work 3, Task 1

const int a = 1;
const int b = 6;
const int c = 3;
const int d = 5;

float Result =  a * (b + (static_cast <float> (c) / d));

cout << "random a = " << a << endl;  
cout << "random b = " << b << endl;  
cout << "random c = " << c << endl;  
cout << "random d = " << d << endl;  

cout << "a * (b + (c / d)) = " ;
cout << Result << endl;  

//Home Work 3, Task 2



uint8_t Num;
uint8_t twOne = 21;
cout << "\nEnter a number (0-255)" << endl;
cin >> Num;


if ( Num <= twOne){
    cout << "The diference is ";
    uint8_t DifBeetwin = twOne - Num;
    cout << DifBeetwin << endl; 
} 
else {
cout << "hui";
}


return 0;
}
