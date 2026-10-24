
#include <iostream>
using namespace std;

// Function declarations
void conditionalStatements();
void loops();
void jumpStatements();
void returnStatement();

int main()
{
    int choice;

    do
    {
        cout << "\n===== MAIN MENU =====" << endl;
        cout << "1. Conditional Statements" << endl;
        cout << "2. Loops" << endl;
        cout << "3. Jump Statements" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                conditionalStatements();
                break;

            case 2:
                loops();
                break;

            case 3:
                jumpStatements();
                break;

            case 4:
                cout << "Program Ended" << endl;
                break;

            default:
                cout << "Invalid Choice" << endl;
        }

    } while(choice != 4);

    return 0;
}

// 1. Conditional Statements
void conditionalStatements()
{
    int num, choice;

    cout << "\nEnter a number: ";
    cin >> num;

    // If statement
    if(num > 0)
    {
        cout << "Number is Positive" << endl;
    }

    // Else-if statement
    if(num > 0)
    {
        cout << "Positive Number" << endl;
    }
    else if(num < 0)
    {
        cout << "Negative Number" << endl;
    }
    else
    {
        cout << "Number is Zero" << endl;
    }

    // Switch statement
    cout << "\nEnter choice (1-3): ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "You selected One" << endl;
            break;

        case 2:
            cout << "You selected Two" << endl;
            break;

        case 3:
            cout << "You selected Three" << endl;
            break;

        default:
            cout << "Invalid Choice" << endl;
    }
}

// 2. Loops
void loops()
{
    int i;

    // For loop
    cout << "\nFor Loop: ";
    for(i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }

    // While loop
    cout << "\nWhile Loop: ";
    i = 1;
    while(i <= 5)
    {
        cout << i << " ";
        i++;
    }

    // Do-while loop
    cout << "\nDo-While Loop: ";
    i = 1;
    do
    {
        cout << i << " ";
        i++;
    } while(i <= 5);

    cout << endl;
}

// 3. Jump Statements
void jumpStatements()
{
    int i;

    // Break statement
    cout << "\nBreak Statement: ";
    for(i = 1; i <= 5; i++)
    {
        if(i == 3)
        {
            break;
        }
        cout << i << " ";
    }

    // Continue statement
    cout << "\nContinue Statement: ";
    for(i = 1; i <= 5; i++)
    {
        if(i == 3)
        {
            continue;
        }
        cout << i << " ";
    }

    // Return statement
    cout << "\nReturn Statement:" << endl;
    returnStatement();
}

// 4. Return keyword
void returnStatement()
{
    cout << "Returning from function" << endl;
    return;
}
