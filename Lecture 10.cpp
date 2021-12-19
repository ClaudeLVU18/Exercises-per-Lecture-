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

//Descending 7 stars
void L10descstarloop7()
{
    for (int i=1; i<= 7; i++) {
        for (int j=i; j<=7; j++){
            cout << "*";
        }
        cout << endl;
    }
}

//Cube
void cubeforloop()
{
    cout<<"Cube a number up to (Minimum: 1): ";
    int cube;
    cin >> cube;
    for (int x=1; x<= cube; x++)
    {
        cout <<"Number is : "<<x<<" and the cube of "<<x<<" is: "<< pow(x,3);
        cout << endl;
    }
}

//9s

void by9s()
{
    for(int num = 100; num <= 200;)
    {
    if((num % 9) == 0)
    {
        cout <<num;
    }
    else
    {
        cout << "\n\n" << num << " is an odd number.";
        
    }
    }
    cin.get();

}

//Rising star
void whilestar()
{
    int x=0;
    while (x<= 4) 
    {
        x++;
        int y=1;
        while (y<=x)
        {
            y++;
            cout << "*";
        }
        cout << endl;
    }
}

//Rise and fall star
void risefallwhileloopstar()
{
    int x=0;
    while (x<= 5) 
    {
        x++;
        int y=x;
        while (y<=5)
        {
            y++;
            cout << "*";
        }
        cout << endl;
    }
    
    int a=0;
    while (a<= 4) 
    {
        a++;
        int b=1;
        while (b<=a)
        {
            b++;
            cout << "*";
        }
        cout << endl;
    }
}
