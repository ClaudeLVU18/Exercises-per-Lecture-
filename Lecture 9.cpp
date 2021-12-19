#include <iostream> //allows for variables to be loaded.
#include <string> // allows string to be used.
#include <stdlib.h> // allows for "system("CLS")" to be used to clear the console.
#include <cmath>    // includes math functions onto the program.

using namespace std;
//REMAIN POSITIVE 

void remainPositive()
{

cout << " Enter a number: ";
    double myNum = 20;
    while (myNum > 0)
    {
        cout << myNum ;
        myNum = myNum - 0.5;
       
        
    }
  
}

//BRUTE FORCE II

void L9pass()
{
    cout << "\n\nPlease enter your password: \n\n";
    string pass = "Visualstudio2020";
    string userInput;
    int attempts=5;
    cin >> userInput;
    
    while(userInput != pass)
    {
        attempts--;
        cout << "Incorrect password. You have "<<attempts<<" attempts left." << endl;

        cin.clear();
        cin.ignore(1000, '\n');
        
        if(attempts==0)
        {
            
            break;
        }
        else
        {
            cin >> userInput;
        }
        

    }
    
    if(attempts==0)
    {
        cout << "You have been locked out of the system for too many failed attempts.";
    }
    else
    {
        cout << "Logged in successfully.";
    }

}

//POINTLESS BOX 
void oneortwoloop()
{
    cout << "Enter either the number 1 or 2\n";
    int input; 
    cin >> input;
    while (input != 0&&!cin.fail()&&input <= 2)
    {
        if (input == 1)
        {
            cout << "You have entered: 1\n";
        }
        else
        {
            cout << "You have entered: 2\n";
        }

        cout << "Enter either the number 1 or 2\n";
        cin >> input;
     
    }
cout << "Error: You have not entered neither the number 1 or 2";

}

//Pointless Box Never ending loop
void pointlessboxloop()
{
    {
    cout << "Enter either the number 1 or 2: ";
    string input; 
    cin >> input;
    while (true)
    {
        if (input == "1")
        {
            cout << "You have entered: 1\n";
        }
        else if (input == "2")
        {
            cout << "You have entered: 2\n";
        }
        else
        {
            cout << "Error: You have not entered neither the number 1 or 2";
            cout << "\nEnter either the number 1 or 2: ";
            cin >> input;
        }


     
    }


}
}

//Reverse subtract by 9
void reverse9()
{
    int num=108;
    while (num>=9 ) 
    {
        
        cout<<num<<endl;
        num = num - 9;
              
    }
    cin.get(); 
    return 0;
}

//Loopy
void countloop()
{

	int myInt = 0, input;
	cout << "Enter a number: ";
	cin >> input;
    while (cin.fail())
	{
		cout << "Enter a number: ";
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> input;
	}
	do
	{
		cout << myInt << endl;
		myInt++;

	} while (myInt<=input);

}

//remain positive
void remainpositive()
{
	cout<<"Enter a number to be subtracted by .5 'til 0: ";
	double myNum;
    cin >>myNum;
	
	while (myNum>0) {
		myNum = myNum - 0.5;
		cout << myNum << endl;
	}
	
}

//dowhileloop Quit
void L9dowhileloop()
{
    char input;
    do
    {
        cout << "\nWould you like to Quit (Y/N)?" <<
        endl;
        cin >> input;
    }

    while( (input != 'Y') && (input != 'y') );
    

    cout <<"Thanks for playing!";
}
    

