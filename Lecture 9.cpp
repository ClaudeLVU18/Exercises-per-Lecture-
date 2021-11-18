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
