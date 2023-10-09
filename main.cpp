#include <iostream>
#include <string>
#include "password.h"
#include "file_handler.h"

using namespace std;

int main() {
    int choice;
    string website, username, password;

    while (true) {
        cout << "Password Manager" << endl;
        cout << "1. Add password" << endl;
        cout << "2. View password" << endl;
        cout << "3. Update password" << endl;
        cout << "4. Delete password" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter website: ";
                cin >> website;
                cout << "Enter username: ";
                cin >> username;
                cout << "Enter password: ";
                cin >> password;
                break;
            case 2:
                cout << "Enter website: ";
                cin >> website;
                break;
            case 3:
                cout << "Enter website: ";
                cin >> website;
                cout << "Enter new password: ";
                cin >> password;
                break;
            case 4:
                cout << "Enter website: ";
                cin >> website;
                break;
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
