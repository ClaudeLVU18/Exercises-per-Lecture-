#include <iostream> //allows for variables to be loaded.
#include <string> // allows string to be used.
#include <stdlib.h> // allows for "system("CLS")" to be used to clear the console.
#include <cmath> // includes math functions onto the program.


using namespace std;

//risefallwhilestar

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
  
 //table loop
  void cinfail()
{
    int y;
    cout << "ENTER A NUMBER YOU WANT THE TABLE OF: ";
    cin >> y;

    while (cin.fail()) {
        cout << "INVALID COMMAND ENTER THE NUMBER AGAIN: " << endl;
        cin.clear();
        
        cin >> y;
    }

    for (int x = 1; x <= 10; x++) {
        cout << y << "x" << x <<" = " << y * x << endl;
    }

}

 // factorial
  
  void factorial()
{
    cout<<"Enter a number to find its factorial";
    int x;
    cin >> x;
    
    for (int y = x; x>0; x--)
    {
        cout<< y * x;
    }
}

    int main()
{
  
  
  return 0;
}
