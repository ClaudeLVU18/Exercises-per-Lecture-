#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	cout << "Enter a numnber whose square and cube root will be found: " << endl;
	int input;
	cin >> input;
	while (cin.fail())
	{
		cout << "ERROR: invalid input: " << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> input;
	}
	cout << "The square-root of "<<input <<" is " << sqrt(input) << endl;
	cout << "The cube-root of " << input << " is " << cbrt(input) << endl;
	return 0;
}
