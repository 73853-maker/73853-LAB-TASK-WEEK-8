#include <iostream>
using namespace std;
int main()
{
    int option;
    do 
	{
    cout << "Simple Menu" << endl;
    cout << "1.  Hey buddy" << endl;
    cout << "2. okay Bye" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your option: ";
    cin >> option;
    if (option == 1) 
	{
    cout << "hey buddy!" << endl;
    }
    else if (option == 2) 
	{
    cout << "Goodbye!" << endl;
    }
    else if (option == 3)
    {
    cout << "Exit the program" << endl;
    }
    else {
    cout << "hard luck try again" << endl;
    }
    } while (option != 3);

    return 0;
}
