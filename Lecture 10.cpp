#include <iostream> //allows for variables to be loaded.
#include <string> // allows string to be used.
#include <stdlib.h> // allows for "system("CLS")" to be used to clear the console.
#include <cmath> // includes math functions onto the program.


using namespace std; 

//For loop countdown
void countdown()
{
     for(int x = 10; x > 0;x--){
        cout << x<<"." << "\n";
        if (x == 1)
        {
           cout<< "\n\nWe have lift off!";
        }
        
    }
}

//Odd even for loop
void L10forloopoddeven(){
     for (int x = 20; x < 25; x++)
    {
        
        if((x % 2) == 0)
        {
        cout << "\n" << x << " is an even number.\n";
        }
        else
        {
        cout << "\n" << x << " is an odd number.\n";
        
        }
        
    }
}

//For loop seven stars
void L10starloop7()
{
    for (int i=0; i<= 6; i++) 
    {
        for (int j=0; j<=6; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}

//Increment and Decrements
void incrementloop()
{
cout << "A table of 0-50\n";
for (int x=0; x<51; x++)
{
	cout << x << endl;
}
cout << endl;
cout << "A table of 50-0\n";
for (int x = 50; x >= 0; x--)
{
	cout << x << endl;
}
cout << endl;
cout << "A table of 30-50\n";
for (int x = 30; x < 51; x++)
{
	cout << x << endl;
}

cout << "A table of 50-10 in decrements of 2\n";
for (int x = 50; x > 11; x=x-2)
{
	cout << x << endl;
}

cout << "A table of 100-200 in increments of 5\n";
for (int x = 100; x < 201; x = x + 5)
{
	cout << x << endl;
}
}

//iterate through a word
void forlooparray()
{
    
    cout <<"Using the at() method in combination with a for loop, rewrite the above program to avoid duplicating cout. Note string character counts start at 0 not 1!\n\n";





    for (int index = 0; index <= 3; index++)
    {
        string myWord = "ARSH";
        cout << myWord.at(index) << endl;
    
    }
    

    
}
