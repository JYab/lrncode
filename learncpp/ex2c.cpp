// ask for a person's name, and generate a framed greeting
#include <iostream>
#include <string>

int main()
{
	std::cout << "Please enter your first name: ";
	std::string name;
	std::cin >> name;
		// ^ section is user input for your name
	// build the message that we intend to write 
	const std::string greeting = "Hello, " + name + "!";
		/*	const makes sure that the variable value does not change
		the string writes out "Hello, 'name'!" using formating	*/
	// build the second and fourth lines of teh output 
	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";
		/*	contains as many sapaces as the number of characters in greeting
		it uses the 'spaces' var to define a var 'second'
		' '	is character literal " " is string literal
		greeting has type std:: string which yields an integer that
		represents the number of characters in greeting */
	
	//build the first and fifth lines of the output
	const std::string first(second.size(), '*');
		/*	uses the 'second' var to create the first line of asterisks
		using as many characters in 'second'	*/
	// write it all
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* "<< greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;

	return 0;
}

// defining a variable as const promises that the var value will not change in its life