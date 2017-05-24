#include <iostream>
#include <string>


// say what standard-library names we use
using std::cin;		using std::endl;
using std::cout;	using std::string;
int main()
{
	// ask for the person's name
	cout << "Please enter your first name: ";

	// read the name
	string name;
	cin >> name;

	// build the message that we intend to write 
	const string greeting = "Hello, " + name + "!";



	// the number of blanks surrounding the greeting 
	const int pad = 1;
		// amount of padding around the frame
	// total number of rows to write 
	const int rows = pad * 2 + 3;
		//controls how many rows we write
	
	const string::size_type cols = greeting.size() + pad * 2 + 2;
	/* size_type holds the number of characters in a string
	ensures that cols is capable of containing the # characters in greeting
	it is conceivable that someone might give our program a string so long
	that an int is insufficient to contain its length	*/

	// write a blank line to separate the output from the input
	cout << endl;

	// invariant: we have written r rows so far
	for (int r = 0; r != rows; ++r) {
		// as long as the r statement is true, it will loop
	// write a row of output (as we will descrive in $2.4/22)
		// ++ is an increment operator, which adds 1 to r
		
		string::size_type c = 0;
	
		// invariant: we have written c characters so far in the current row
		while (c != cols) {
			
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();		
			
			} else {

				// are we on the border?
				if ( r == 0 || r == rows - 1 ||
					c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			}
		}
			// write one or more characters
			// adjust the value of c to maintain teh invariant
		cout << endl;

	}

	return 0;

}



