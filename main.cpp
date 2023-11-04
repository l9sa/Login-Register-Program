#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, string> userDatabase;

void RegisterUser()
{
    string username, password;

    cout << "Enter a username: ";
    cin >> username;

    if (userDatabase.find(username) != userDatabase.end())
    {
        cout << "Username already exists. Please choose a different username." << endl;
        return;
    }

    cout << "Enter a password: ";
    cin >> password;

    userDatabase[username] = password;
    cout << "Registration successful!" << endl;
}

void Login()
{
    string username, password;

    cout << "Enter your username: ";
    cin >> username;

    if (userDatabase.find(username) == userDatabase.end())
    {
        cout << "Username not found. Please register or enter a valid username." << endl;
        return;
    }

    cout << "Enter your password: ";
    cin >> password;

    if (userDatabase[username] == password)
    {
        cout << "Login successful!" << endl;
    }
    else
    {
        cout << "Incorrect password. Please try again." << endl;
    }
}

int main()
{
    int choice;

    while (true)
    {
        cout << "Menu:" << endl;
        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            RegisterUser();
            break;
        case 2:
            Login();
            break;
        case 3:
            cout << "Exiting program." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
