#include <iostream> //allows for variables to be loaded.
#include <string> // allows string to be used.
#include <stdlib.h> // allows for "system("CLS")" to be used to clear the console.
#include <cmath> // includes math functions onto the program.


using namespace std; // every variable is seeking a namespace to be executed in, this saves the time 
                    // by designating the following codes to be in "std" (Standard).

string expofunction(double num)
{
    
    for(double y = 1; y <= 10; y++){
        double expo = pow(num, y);
        cout << "The "<< y<<" exponent value of "<< num << " would be: "<< expo<<endl;
    }

    return "\n\nCode succesfully executed.";
	
	
	
}

int main()
{
    system("CLS");
	  int input; 
    int fact = 1;
	
	cout << "Enter an integer: " << endl;
	cin >> input;
	while (cin.fail())
	{
		cout << "ERROR: Please enter a proper integer:  " << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> input;
	}
	cout << rootfunction(input) << endl;




	return 0;

}
