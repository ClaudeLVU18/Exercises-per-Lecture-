//Random array generator

#include <iostream>
#include <string>
#include <algorithm>
#include <exception>
#include <array>
#include <random>
using namespace std;

int main()
{
	int sum = 0;
	
	srand(7);
	array<int,1000> randomArry;
	for (int i = 0; i < 1000; i++)
	{
		randomArry[i] = rand()%50;
		cout << randomArry[i] << ",";
		if (randomArry[i] == 6)
		sum++;
		}
	cout << "The number 6 appeared: " << sum << " times" << endl;
  
  return 0;
}



//smallest array number
#include <iostream>
#include <array>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int i;
    double x = 0; 
    double arr[10];
    cout << "Enter a number of elements from 1 to 10: ";
    for (i = 0; i < 10; ++i)
    {
        cout << "\nEnter element #" << i + 1 << ": ";
        cin >> arr[i];
    }
    x = arr[0];
    for (i = 0;i < 10; i++)
    {
        if (x > arr[i])
            x = arr[i];
    }
    cout << "The smallest element is " << x;

    return 0;
}

//largest array number

#include <iostream>
#include <array>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int i;
    double x = 0; 
    double arr[10];
    cout << "Enter a number of elements from 1 to 10: ";
    for (i = 0; i < 10; ++i)
    {
        cout << "\nEnter element #" << i + 1 << ": ";
        cin >> arr[i];
    }
    x = arr[0];
    for (i = 0;i < 10; i++)
    {
        if (x < arr[i])
            x = arr[i];
    }
    cout << "The largest element is " << x;

    return 0;
}
