#include <iostream>
#include <string>
using namespace std;

bool invitation(string invite){
    string inv ="invite";
    if(inv==invite){
        return true;
    }
    else{
        return false;
    }
}

void showMenu()
{
    cout << "1. Vanish" << endl;
    cout << "2. Float" << endl;
    cout << "3. Read Mind" << endl;
    cout << "4. Escape" << endl;
    cout << "5. Quit" << endl;
}

void vanish(string obj)
{
    cout << " Abracadabra! The " << obj << " has vanished!" << endl;
}

void floatIt(string name)
{
    cout << "The mystical forces are lifting " << name << " off the ground!" << endl;
}

void readMind()
{
    int num;
    cout << "Think of a number between 1 and 100... ";
    cin >> num;
    cout << " You were thinking of " << num << "!" << endl;
}

void escape(string chains)
{
    cout << "With a burst of magic, I have escaped the " << chains << "!" << endl;
}

int main()
{
    string invite;
    cout << "Enter your invitation: ";
    cin >> invite;
    if (invitation(invite)){
        int choice;  
        showMenu();
        while (true)
        {
            cout << "Enter your choice: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                string obj;
                cout << "What object would you like to make disappear? ";
                cin >> obj;
                vanish(obj);
                break;
            }
            case 2:
            {
                string name;
                cout << "Who would you like to Float? ";
                cin >> name;
                floatIt(name);
                break;
            }
            case 3:
            {
                readMind();
                break;
            }
            case 4:
            {
                string chains;
                cout << "What would you like to escape from? ";
                cin >> chains;
                escape(chains);
                break;
            }
            case 5:
                cout << "Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }
    else {
        cout<<"You do not have the invitation to the magic show:"<<endl;
    }
    return 0;
}