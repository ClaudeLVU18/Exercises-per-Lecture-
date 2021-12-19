#include <iostream>
#include <string>
using namespace std;

void welcome()
{
    cout << "Hello";
}

void bye()
{
    cout << "Bye";
}
int main()
{
    welcome();
    bye();
    return 0;
}


//Greetings function
#include <iostream>
#include <string>
using namespace std;

string L15greetings(int time){
    if(time < 12){
        return "Good Morning";
    }
    else if(time < 18){
        return "Good Afternoon";
    }
    else if(time < 22){
        return "Good evening";
    }
    else if(time < 25){
        return "Goodnight";

    }
    else{
        return "error: not a valid time.";
        
    }
}


int main()
{
    cout<<"What time is it?: "<<endl;
    int userInput;
    cin >>userInput;
    while(cin.fail())
    {   
        system("CLS");  
        cout<<"What time is it?: "<<endl;

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> userInput;

    }

    cout<< L15greetings (userInput)<<endl;
    
    
    return 0;
}

//Returning values
#include <iostream> //allows for variables to be loaded.
#include <string> // allows string to be used.
#include <stdlib.h> // allows for "system("CLS")" to be used to clear the console.
#include <cmath> // includes math functions onto the program.

using namespace std;
int L15myCalculation(int num){
    num *= 2;
    num += 8;
    return num;
}

int main(){
    int userNum;
    cout<<"Enter a number: ";
    cin >> userNum;
    userNum = L15myCalculation(userNum);
    cout<<userNum<<endl;
    
    return 0;
    
}
#include <iostream> //allows for variables to be loaded.
#include <string> // allows string to be used.
#include <stdlib.h> // allows for "system("CLS")" to be used to clear the console.
#include <cmath> // includes math functions onto the program.


using namespace std;
//Shop affordability function
double L15sumItems(double item1, double item2){
    double total = item1 + item2;
    return total;
}

int main(){
    double myMoney = 40.00;
    double shoes;
    cout <<"How much are the shoes you want to buy: ";
    cin >> shoes;
    cout <<"How much is the tshirt you want to buy: ";
    double tshirt;


    if (L15sumItems(shoes, tshirt) <= myMoney){
        cout << "you can afford these items"<<endl;
    }
    else
    {
        cout << "keep saving up"<<endl;
    }
    return 0;
}
