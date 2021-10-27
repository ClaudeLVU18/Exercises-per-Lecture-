# Exercises-per-Lecture-
Exercises  



LECTURE 5 

PRINTING BIOGRAPHY

#include <iostream>
#include <string>

using namespace std;

	int main()
{
    cout << "\n\nINPUT NAME, HOMETOWN, AND AGE.\n\n";
    cout << "\n\nHi, what is your name? ";
    string myName;
    cin >> myName;

    cout << "\n\nOh, where are you from? ";
    string homeTown;
    cin >> homeTown;

    cout << "\n\nNice, how old are you now? ";
    int age;
    cin >> age;
    
    system("CLS");
    cout << "\n\nHi " << myName << "\n\nI see you are from " << homeTown << "." << "\n\nAnd that you are now " << age;
    cin.get();
  
	return 0;


}
  
  
 TEMPERATURE CONVERTER CELCIUS/FAHRENHEIT
  
  #include <iostream>
#include <string>

using namespace std;

void FahtoCel()
{
    cout << "\n\nCONVERTING FAHRENHEIT TO CELSIUS.\n\n";
    cout <<"Type in temperature in Fahrenheit: ";
    double fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32)*0.5556;
     
    cout << "\n\nThat would be " << celsius << " degrees celsius.\n\n";
    cin.get();

}

void CeltoFah()
{
    cout << "\n\nCONVERTING CELSIUS TO FAHRENHEIT.\n\n";
    cout << "Type in temperature in Fahrenheit: ";
    double celsius;
    cin >> celsius;
    double fahrenheit = celsius*1.8 + 32;
     
    cout << "\n\nThat would be " << fahrenheit << " degrees fahrenheit.\n\n";
    cin.get();

}


int main()
{     
    system("CLS");

    cout << "\nCelsus and Fahrenheit Temperature converter\n\n";
    cout << "1. Celsius to Fahrenheit.\n2. Fahrenheit to Celsius.\n\n";
    cout << "Select a temperature type converter:  ";

    int userInput;
    cin >> userInput;

  

    switch (userInput)
    {
    case 1:
        CeltoFah();

        break;

    case 2:
        FahtoCel();

        break;
    
    default:

        
        
        cout << "ERROR: not a valid option.";
        
        
        
        
        break;
    }




    return 0; 
}



 

  
