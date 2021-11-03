//EARTHQUAKE
#include <iostream>
#include <string>

using namespace std;

  int main()
  {
    void richterScl()
{   
    cout << "Richter Scale desciptor. \n\n";
    cout << "Input an earthquake's magnitude: \n\n";
    double grd;
    cin >> grd;

    if(cin.fail()) // to check for inappropriate input error
    {
    cin.clear();
    cout << "\n\nERROR: Sorry, that is not a valid value. \n" <<endl;
    cin>>grd;
    }
    if(!cin.fail())

    if ((grd > 10.0) || (grd == 10.0))
    {
        cout << "\nMeteoric level.\n\n";
    }
    else if ((grd == 8.0) || (grd >8.0) && (grd<10.0))
    {
        cout << "\nGreat level.\n\n";
    }
    else if ((grd == 7.0) || (grd >7.0) && (grd<8.0))
    {
        cout << "\nMajor level.\n\n";
    }
    else if ((grd == 6.0) || (grd >6.0) && (grd<7.0))
    {
        cout << "\nStrong level.\n\n";
    }
    else if ((grd == 5.0) || (grd >5.0) && (grd<6.0))
    {
        cout << "\nModerate level.\n\n";
    }
    else if ((grd == 4.0) || (grd >4.0) && (grd<5.0))
    {
        cout << "\nLight level.\n\n";
    }
    else if ((grd == 3.0) || (grd >3.0) && (grd<4.0))
    {
        cout << "\nMinor level.\n\n";
    }
    else if ((grd == 2.0) || (grd >2.0) && (grd<3.0))
    {
        cout << "\nVery minor level.\n\n";
    }
    else
    {
        cout << "\nMicro Level.\n\n";
    }
    return 0;
  }

//KILLING TIME DUBAI
#include <iostream>
#include <string>

using namespace std;

  int main()
  {
    cout << "You have arrived in Dubai Mall. \n\n";
    cout << "Now it's time to wait for your friend. \n\n";
    cout << "Press enter to continue... \n\n";
    cin.get();
    cout << "Your friend just messaged you. They say they will be late. \n\n";
    cout << "How late do you think they said they will be? \n\n";
    cout << "Minutes: ";
    
    double time;
    cin >> time;

    if(cin.fail()) // to check for inappropriate input error
    {
    cin.clear();
    cout << "\n\nERROR: Sorry, that is not a valid character. \n" <<endl;
    cin>>time;
    }
    if(!cin.fail())

    if (time > 14)
    {
        cout << "\nSince your friend is going to be " << time << " minutes late, you should go do something.\n";
        cout << "\nHow much money do you have?\n";
        cout << "\nAED: ";
        double cash;
        cin >> cash;

        if(cin.fail()) // to check for inappropriate input error
        {
        cin.clear();
        cout << "\n\nERROR: Sorry, that is not a valid character. \n" <<endl;
        cin>>cash;
        }
        if(!cin.fail())
            
            if (cash > 4)
            {
                cout << "\nYou should go get some coffee.\n\n" << endl;
            }
            else
            {
                cout << "\nYou should go for a walk around town.\n\n" << endl;
            }
    }
    else
    {
        cout << "\nJust sit and wait for them at the food court.\n\n" << endl;
    }
    return 0;
  }

//STARTING A BAND IF ELSE STATEMENT
#include <iostream>
#include <string>

using namespace std;

  int main()
  {
    cout << "So you need a guitarist or a drummer for your band...\n\nYou need a guitarist or a drummer.\n\n";
    cout << "Take your friend with you.\n\n";
    cout << "Do they play an instrument?\n\n";
    cout << "\n\nYes or No:  ";

    string musicalFriend;
    
    cin >> musicalFriend;

    if((musicalFriend == "yes")||(musicalFriend =="Yes")||(musicalFriend =="YES"))
    {
        cout << "\n\nWhat instrument does he play?\n\n";
        cout << "\nGuitar or drums?\n\n";
        cout << "\nType in their instrument of choice: ";

    

        string friendPlays;
        cin >> friendPlays;

        if((friendPlays == "guitar") || (friendPlays == "Guitar") || (friendPlays == "Drum") || (friendPlays == "drum") || (friendPlays == "Drums") || (friendPlays == "drums")|| (friendPlays == "GUITAR")|| (friendPlays == "DRUM")|| (friendPlays == "DRUMS"))
        {
        cout << "\n\nGreat! Your friend plays the " << friendPlays << ". Your friend can join.";
        }
        else
        {
            cout << "\n\nSorry, that's not the instrumentalist your looking for.";
        }
    }
    else
    {
        cout << "\n\nSorry, they can't join";
    }
    return 0;
  }

//MARKING GRADES
#include <iostream>
#include <string>

using namespace std;

  int main()
  {
    cout << "Enter your full name" << endl;
    string stdntName;
    getline(cin, stdntName);
    

    cout << "\nEnter your grade marks (0-100):  ";


    int grade;

    cin >> grade;
    if (cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout << "ERROR: not a valid input.";
    }

    else if (grade > 100)

    {


        cout << "\nPlease keep your marks within 0-100\n";
    }

    else

    {

        switch (grade/10)

        {

        case 10:

        case 9:
        case 8:

        {
            


            cout << stdntName <<", your grade is: A";


            break;
        }
        case 7:

        {    


            cout << stdntName << ", your grade is: B";


            break;
        }
        case 6:
        {
            


            cout << stdntName << ", your grade is: C";

            break;
        }
        case 5:
        {
            

            cout << stdntName << ", your grade is: D";


            break;
        }
        case 4:
        {
            



            cout << stdntName << ", your grade is: E";



            break;
        }
        default:
        {
            


            cout << stdntName << ", your grade is: F\n";


        }
        }
    }
    return 0;
  }

//LETTER CHECKER
#include <iostream>
#include <string>

using namespace std;

  int main()
  {
    cout << "GInput a letter, I will tell you if it is a vowel or consonant.\n\n";
    string ltr;
    cin >> ltr;

    if(cin.fail()) // to check for inappropriate input error
    {
    cin.clear();
    cout << "\n\nERROR: Sorry, that is not a valid character. \n" <<endl;
    cin>>ltr;
    }
    if(!cin.fail()) //allows for the code to end if user input error is present.

    if((ltr == "a") || (ltr == "e") || (ltr == "i") || (ltr == "o") || (ltr == "u") || (ltr == "A") || (ltr == "E") || (ltr == "I") || (ltr == "O") || (ltr == "U"))
    {
        cout << "Vowel";
    }
    else
    {
        cout << "consonant";
    }
    return 0;
  }

//FRANCE CAPITAL
#include <iostream>
#include <string>

using namespace std;

  int main()
  {
    cout << "What is the capital of France?\n";
    string capital;
    cin >> capital;

    if ((capital == "Paris")||(capital == "paris")||(capital == "PARIS"))
    {
        cout << "\nThat is correct.";
    }
    return 0;
  }

//THEME PARK ELIGIBILITY
#include <iostream>
#include <string>

using namespace std;

  int main()
  {
    cout << "Welcome to the Legoland Dubai! This is Formula Rossa, how old are you?\n";
    int age;
    cin >> age;
    cout << "How tall are you?\n";
    double height;
    cin >> height;
    

    if((height > 0.6) && (age > 5))
    {
        cout << "Welcome, you may enter.";
    }
    else
    {
        cout << "Sorry, you are not eligible to enter the ride.";
    }
    return 0;
  }

