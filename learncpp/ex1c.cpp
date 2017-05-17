// ask for a person's name, and greet the person
#include <iostream>
#include <string>
	// string is also part of the standard library and not the core language
int main()
{
	// ask for the person's name
	std::cout << "Please enter your first name: ";
		/*	there isn't a std::endl and the output does not begin a new line
		instead, it waits for the same-line input	*/
	// read the name
	std::string name;		// define name
	/*	as soon as the computer reaches the }, it destroys the variable 'name'
	it returns any memory that the variable occupied to the system for other uses	
	defining a string variable implicitly initializes it. if we don't supply the
	string object with a value, it is called an 'empty' or 'null' string	*/
	std::cin >> name;		// read into
	/* executes the variable 'name'
	Analogous with its use of the << operator and std::cout for output, the library
	uses the >> operator and std::cin for input. In this example, >> reads a string 
	from the standard input and stores what it read in the object named 'name'	*/
		// write a greeting
	std::cout << "Hello, " << name << "!" << std:: endl;
	return 0;
}