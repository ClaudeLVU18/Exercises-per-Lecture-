#include <iostream> //allows for variables to be loaded.
#include <string> // allows string to be used.
#include <stdlib.h> // allows for "system("CLS")" to be used to clear the console.
#include <cmath> // includes math functions onto the program.


using namespace std;
//Array Art
void L13arraysymbols()
{
	string snacks[5][5] = {
		{"_","_","_","_","_"}, //1 row
	{"_", "O", "_", "O", "_"}, //2 row
	{"_", "@", "@", "@", "_"}, //3 row
	{"_", "^", "^", "^", "_"}, //4 row
	{"_", "V", "V", "V","_" } //5 row
	};

	for (int x = 0; x < 5; x++)
	{
		cout << endl;
		for (int y = 0; y < 5; y++)
			cout << snacks[x][y];
	}
	cout << endl;
}

//input and display array
void L13inputoutputarray()
{
    int input[5];
    for (int i = 0; i<5; i++)
    {
        cout << "\nInput: ";
        cin >> input[i];

    }

    for (auto course: input) {//range based for loop
        cout << course << endl;
    }
}

int main()
{
  L13inputoutputarray();
  void L13arraysymbols();
  
  return 0;
}
