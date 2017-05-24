#include <iostream>

int main()
{ 
	
	std::cout << "Hello, world!" << std::endl;

	std::cout << "How old are you?:" << std::endl;
	int age = 0;
	std::cin >> age;
	std::cout << "So you are " << age << " years old.";
	std::cout << "If we double your age we get " << age * 2 << std::endl;

	return 0;
}