#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include "/Users/KI20449224/Downloads/Project_Flies/include/adminLogin.h"
#include "/Users/KI20449224/Downloads/Project_Flies/include/facultyLogin.h"

void adminLogin();
void facultyLogin();

using namespace std;

class admin adm;
class faculty fac;

int num = 0;

int main()
{
    int choice;
    cout << "\n\n--------------------------------------------------------------------" << endl;
    cout << "               Training Schedule Management System                  " << endl;
    cout << "--------------------------------------------------------------------" << endl;
    cout << "\n\n\t\tWelcome To Home Page" << endl;
    cout << "\n\t\tPress 1 --> Admin Login" << endl;
    cout << "\t\tPress 2 --> Faculty Login" << endl;
    cout << "\t\tPress 3 --> Exit" << endl;
    cout << "\nPlease Enter Your Choice : ";
    cin >> choice;

    if (cin.fail())
    {
        cin.clear();
        cin.ignore(512, '\n');
        cout << "\nPlease enter a number!!" << endl;
        main();
    }
    else
    {
        switch (choice)
        {
        case 1:
            adminLogin();
            break;
        case 2:
            facultyLogin();
            break;
        case 3:
            cout << "See you again." << endl;
            break;
        default:
            cout << "\nPlease select from the options given above" << endl;
            main();
        }
    }
}

void adminLogin()       //UTC-007 & AA-001
{
    string userId = "admin";
    string password = "12345";
    string id, pass;
    cout << "\n\n------------------------------------------" << endl;
    cout << "         Welcome To The Admin Page         " << endl;
    cout << "------------------------------------------" << endl;
    cout << "\n\nPlease Enter Your Username & Password For Authentiocation" << endl;

    cout << "\nEnter Your Username : ";
    cin >> id;

    cout << "\nEnter Your Password : ";
    cin >> pass;

    if (userId == id && password == pass)
    {
        cout << "\nCongratulations " << userId << endl;
        cout << "Your login as administrator is successfull. Thanks for logging in.\n"
             << endl;
        adm.adminModules();
    }
    else
    {
        cout << "\n!!!Login Error!!!" << endl;
        cout << "Please check your username and password again\n"
             << endl;
        num += 1;
        if (num == 3)
        {
            cout << "\nACCESS DENIED" << endl;
            exit(0);
        }
        main();
    }
}

void facultyLogin()         //UTC-007 & AA-001
{

    int count = 0;
    string id, pass, stream, userId, password, techName;
    cout << "\n\n------------------------------------------" << endl;
    cout << "         Welcome To The Faculty Page         " << endl;
    cout << "------------------------------------------" << endl;
    cout << "\n\nPlease Enter Your Credentials For Authentiocation" << endl;

    cout << "\nEnter Your Name : ";
    cin >> userId;

    cout << "\nEnter Your Password : ";
    cin >> password;

    cout << "\nEnter Your Technology Name : ";
    cin >> techName;

    ifstream input("/Users/KI20449224/Downloads/Project_Flies/data/facultyLogin.csv");

    while (input >> id >> pass >> stream)
    {
        if (id == userId && pass == password && stream == techName)
        {
            count = 1;
        }
    }

    input.close();

    if (count == 1)
    {
        cout << "\n\nCongratulations " << userId << endl;
        cout << "Your login as faculty is successfull. Thanks for logging in.\n"
             << endl;
        fac.loginId = userId;
        fac.facultyModules();
    }
    else
    {
        cout << "\n!!!Login Error!!!" << endl;
        cout << "Please enter your details again\n"
             << endl;
        num += 1;
        if (num == 3)
        {
            cout << "\nACCESS DENIED" << endl;
            exit(0);
        }
        main();
    }
}