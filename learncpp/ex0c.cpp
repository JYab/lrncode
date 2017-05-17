
// a sall C++ program 
#include <iostream>
/* #include means to specifically call out for a standard library. In this case,
iostream is the staandard header */
int main() 
// every c++ script has a main function. main functions require integers 
// as its result. A '0' means it is successful; other values will mean errors
{	
	
	std::cout << "Hello, world!" << std::endl;	
/* std is a namespace used to contain all the names that it defines
ex: std would define cout and end1. 
:: is a scope opertator. to the left is its name(std) 
'cout' is (the "C output" that allows you to print to the console))
to the right is waht it defines(cout). so the name cout that is in the scope std
'<<' is the output operator to write "Hello, world!" */
	return 0;
}
