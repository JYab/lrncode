#include <iostream>

int main()
{
	// exercise 1.12
	/* the for loop creates or initializes teh variable i, then sets
	the condition for how many times it loops, and executes the
	++i expression	*/

	// exercise 1.13
	std::cout << "Exercise 1.13:\n" << std::endl;
	int sum = 0;
	for (int val = 0; val < 100; ++val)
		sum += val;
	std::cout << sum << std::endl;


	for (int countdown = 10; countdown >= 0; --countdown)
		std::cout << countdown << std::endl;

	int minrange = 0, maxrange = 0;
	std::cout << "Write a minimum and maximum range" << std::endl;
	std::cin >> minrange >> maxrange;
	

	for (int countup = minrange; countup <= maxrange; ++countup)
		std::cout << countup << std::endl;


	return 0;

	// exercise 1.14
	/* an advantage of an for loop is teh amount of lines used
	for the statement. a disadvantage would be that for loops
	cannot use boolean conditions */

	// exercise 1.15	~~ intentional errors
/*
	int main () 
	{
		int v1 = 0, v2 = 0;
		std::cin >> v >> v2; // error: uses "v" not "v1"
		// error: cout not defines; should be std::cout
		cout << v1 + v2 << std:endl;
		return 0;
	}
*/
}