#include <iostream>

int main()
{	// exercise 1.9
	int sum = 0, val = 50;
	std::cout << "Exercise 1.9:\n" << std::endl;
	while (val < 100)

	{
		sum += val;
		++val;
	}
	std::cout << sum << std::endl;

	// exercise 1.10
	int countdown = 10;
	std::cout << "Exercise 1.10:\n" << std::endl;
	while (countdown >= 0)
	{
		std::cout << countdown << std::endl;
		--countdown;

	}
	
	// exercise 1.11
	int minrange = 0, maxrange = 0, count = 0;
	std::cout << "Exercise 1.11:\n" << std::endl;
	std::cout << "Write a minimum and maximum range" << std::endl;
	std::cin >> minrange >> maxrange;
	int countup = minrange;
	while (countup <= maxrange)
	{
		std::cout << countup << std::endl;
		++countup;
	}
	return 0;
}