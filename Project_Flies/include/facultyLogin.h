#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
string status;
static int flag = 0;

class faculty
{
public:
    string loginId;
    void viewSchedule()         //UTC-005 & FA-001
    {
        string ans = loginId;
        string name;
        int count = 1;
        cout << "\nPlease enter your name : ";
        cin >> name;

        for (int i = 0; i < name.length(); i++)
        {
            if (!isalpha(name[i]))
            {
                cout << "\n!!Please enter valid name below!!" << endl;
                viewSchedule();
            }
        }

        if (ans != name)
        {
            cout << "\nYou don't have access to view other faculty schedule." << endl;
            cout << "Please enter your name only." << endl;
            viewSchedule();
        }

        ifstream f1("/Users/KI20449224/Downloads/Project_Flies/data/trainerallotment.csv");
        while (f1 >> batchID >> technology >> startDate >> endDate >> nod >> venueDetail >> nop >> month >> facultyName)
        {
            transform(facultyName.begin(), facultyName.end(), facultyName.begin(), ::tolower);
            transform(name.begin(), name.end(), name.begin(), ::tolower);

            if (facultyName == name)
            {
                cout << "\nBelow are the details of your schedule" << endl;
                cout << "\n\nSchedule --> " << count << endl;
                cout << "Batch Id                :            " << batchID << "\nTechnology              :            " << technology << "\nStart Date              :            " << startDate << "\nEnd Date                :            " << endDate << "\nNumber of Days          :            " << nod << "\nVenue Details           :            " << venueDetail << "\nNumber of Participants  :            " << nop << "\nMonth                   :            " << month << endl;
                count++;
                flag = 1;
            }
        }

        if (flag == 1)
        {
            cout << "\nI hope you found your schedule. \nDo you want to accept this schedule type(yes/no) : ";
            cin >> status;

            cout << "\nYour response has been recorded" << endl;
            flag = 0;

            int opt;

            cout << "\n\nNow, Please choose from below option to perform your next task \nEnter 1 --> Go Back To Dashboard \nEnter 2 --> Request For Cancelling Schedule \nEnter 3 --> Quit From Application" << endl;

            cout << "\n Please enter your choice here : ";
            cin >> opt;

            if (cin.fail())
        {
            cin.clear();
            cin.ignore(512, '\n');
            cout << "\nOops you've entered wrong input. Taking back you on your dashboard." << endl;
            facultyModules();
        }

            if (opt == 1)
            {
                facultyModules();
            }
            else if (opt == 2)
            {
                cancelSchedule();
            }
            else if (opt == 3)
            {
                cout << "See you again." << endl;
                exit(0);
            }
            else
            {
                cout << "\nTaking back to you on your dashboard" << endl;
                facultyModules();
            }
        }
        else
        {
            cout << "Admin hasn't created a schedule for you. Please wait for some time and check back again." << endl;
            exit(0);
        }
    }

    void cancelSchedule()       //UTC-006 & FA-002
    {
        if (status == "yes" || status == "y" || status == "YES" || status == "Y")
        {
            cout << "\nYou've already accepted your schedule. Now you cannot cancel it." << endl;

            string option;
            cout << "\nDo you want to quit? If yes type 'Y' otherwise 'N' : ";
            cin >> option;

            if (option == "N" || option == "no" || option == "NO" || option == "n")
            {
                facultyModules();
            }
            else
            {
                cout << "See you again" << endl;
                exit(0);
            }
        }
        else
        {
            string ans;
            cout << "Do you want to cancel your current schedule (yes/no) : ";
            cin >> ans;

            if (ans == "yes" || ans == "y" || ans == "YES" || ans == "Y")
            {
                status = "yes";
                cout << "\nYour request has been processed. \nThank You!!" << endl;

                string option;
                cout << "\nDo you want to quit? If yes type 'Y' otherwise 'N' : ";
                cin >> option;

                if (option == "N" || option == "no" || option == "NO" || option == "n")
                {
                    facultyModules();
                }
                else
                {
                    cout << "See you again" << endl;
                    exit(0);
                }
            }
            else
            {

                string option;
                cout << "\nDo you want to quit? If yes type 'Y' otherwise 'N' : ";
                cin >> option;

                if (option == "N" || option == "no" || option == "NO" || option == "n")
                {
                    facultyModules();
                }
                else
                {
                    cout << "See you again" << endl;
                    exit(0);
                }
            }
        }
    }

    void facultyModules()
    {
        cout << "\nHere's your Dashboard \nPlease enter your choice to perform particular tasks" << endl;
        cout << "\n\n--------------------------------------------------------" << endl;
        cout << "\tEnter 1 -> To View Schedule" << endl;
        cout << "\tEnter 2 -> To Cancel Schedule" << endl;
        cout << "\tEnter 3 -> To Quit From This Session" << endl;
        cout << "--------------------------------------------------------" << endl;

        int choice;
        cout << "\nPlease enter your choice : ";
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(512, '\n');
            cout << "\nPlease enter a number!!" << endl;
            facultyModules();
        }
        else
        {
            switch (choice)
            {
            case 1:
                viewSchedule();
                break;
            case 2:
                cancelSchedule();
                break;
            case 3:
                cout << "See you again." << endl;
                exit(0);
                break;
            default:
                cout << "\nPlease enter correct input value" << endl;
                facultyModules();
            }
        }
    }
};
