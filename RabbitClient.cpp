#include "RabbitDataBase.h"
#include <iostream>
using namespace std;

const int MAX_MENU_LEN = 70;
void printMenu(char options[][MAX_MENU_LEN], int numEntries) {
    for (int index = 0; index < numEntries; index++) {
        cout << (index + 1) << ") " << options[index] << endl;
    }
}

// Interact with the database functions using a menu to choose what to do
int main() {
    RabbitDataBase database;
    int option = 0;
    char menuOptions[][MAX_MENU_LEN]={  "Print rabbit list",
                                        "Save list to file",
                                        "Remove rabbit",
                                        "Add rabbit",
                                        "Quit"};
    readRabbits(rabbits);
    do {
        printMenu(menuOptions,5);
        option = readInt("Please select an option: ");
        switch(option) {
            case 1:
                database.print(cout, true )
                break;
            case 2:
                save();
                break;
            case 3:
                remove();
                break;
          case 4:
                makeInvalid();
                break;
            case 5:
                add();
                break;
            case 6:
                makeRabbit();
                break;
            default:
                cout << "Invalid option, try again" << endl;
                break;
        }
    }while(option != 5);
    
    return 0;
}

int  main() {
    Rabbit rabbits[MAX_RABBITS]; 
    int option = 0;
    char menuOptions[][MAX_MENU_LEN]={  "Print rabbit list",
                                        "Save list to file",
                                        "Remove rabbit",
                                        "Add rabbit",
                                        "Quit"};
    readRabbits(rabbits);
    do {
        printMenu(menuOptions,5);
        option = readInt("Please select an option: ");
        switch(option) {
            case 1:
                printRabbits(cout, rabbits, true);
                break;
            case 2:
                saveRabbits(rabbits);
                break;
            case 3:
                removeRabbit(rabbits);
                break;
            case 4:
                addRabbit(rabbits);
                break;
            case 5:
                break;
            default:
                cout << "Invalid option, try again" << endl;
                break;
        }
    }while(option != 5);
    
    return 0;
}

}
