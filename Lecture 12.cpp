#include <iostream> //allows for variables to be loaded.
#include <string> // allows string to be used.
#include <stdlib.h> // allows for "system("CLS")" to be used to clear the console.
#include <cmath> // includes math functions onto the program.


using namespace std;

//Five Subject marks
void fivemarksavg()
{
    cout << "Sum and average for grade marks calculator (Marks from 0-100).\n\n";
    double a,b,c,d,e;
    cout << "Mark in the first subject's marks: ";
    cin >> a;
    while(cin.fail())
    {
        cout << "\nERROR: not a valid input.\nMark in the first subject's marks from 0-100: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> a;

    }
    while((a > 100)||(a<0))
    {
        cout <<"ERROR: Please keep marks between 0-100";
        cout << "\nMark in the first subject's marks: ";
        cin >> a;
    }
    cout << "\nMark in the second subject's marks: ";
    cin >> b;
    while(cin.fail())
    {
        cout << "\nERROR: not a valid input.\nMark in the second subject's marks from 0-100: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> b;

    }
    while((b > 100)||(b<0))
    {
        cout <<"ERROR: Please keep marks between 0-100";
        cout << "\nMark in the second subject's marks: ";
        cin >> b;
    }
    cout << "\nMark in the third subject's marks: ";
    cin >> c;
    while(cin.fail())
    {
        cout << "\nERROR: not a valid input.\nMark in the third subject's marks from 0-100: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> c;

    }
    while((c > 100)||(c<0))
    {
        cout <<"ERROR: Please keep marks between 0-100";
        cout << "\nMark in the third subject's marks: ";
        cin >> c;
    }
    cout << "\nMark in the fourth subject's marks: ";
    cin >> d;
    while(cin.fail())
    {
        cout << "\nERROR: not a valid input.\nMark in the fourth subject's marks from 0-100: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> d;

    }
    while((d > 100)||(d<0))
    {
        cout <<"ERROR: Please keep marks between 0-100";
        cout << "\nMark in the fourth subject's marks: ";
        cin >> d;
    }
    cout << "\nMark in the last subject's marks: ";
    cin >> e;
    while(cin.fail())
    {
        cout << "\nERROR: not a valid input.\nMark in the last subject's marks from 0-100: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> e;

    }
    while((e > 100)||(a<0))
    {
        cout <<"ERROR: Please keep marks between 0-100";
        cout << "\nMark in the last subject's marks: ";
        cin >> e;
    }
    
    double sum = a+b+c+d+e;
    cout << "\n\nThe sum total of all subject marks is: " <<sum<< "\nThe mean total of the marks are: "<<sum/5<<"\n"<<endl;



}

//month array
void month()
{
    string month[12] = { "January", "February", "March","April","May","June","July","August","September","October","November","December" };
    
    
    for (int i = 0; i < 12; i++)
    {
        cout << month[i] << endl;
    }
}

int main()
{
  
  
  return 0;
}
