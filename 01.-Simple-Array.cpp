#include <iostream>
#include <string>

using namespace std; 

const int MAX_SIZE = 10;

int main() {
    string names[MAX_SIZE];
    int option;
    int count = 0;

    while (true) {
        cout << "Options:" << endl;
        cout << "1. Create" << endl;
        cout << "2. Read" << endl;
        cout << "3. Update" << endl;
        cout << "4. Delete" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> option;

        if (option == 1) { // Create
            if (count < MAX_SIZE) {
                cout << "Enter a name: ";
                cin >> names[count];
                count++;
            } else {
                cout << "Array is full. Cannot create more names." << endl;
            }
        } else if (option == 2) { // Read
            cout << "Names in the array:" << endl;
            for (int i = 0; i < count; i++) {
                cout << i + 1 << ". " << names[i] << endl;
            }
        } else if (option == 3) { // Update
            int index;
            cout << "Enter the index of the name to update: ";
            cin >> index;
            if (index >= 1 && index <= count) {
                cout << "Enter the new name: ";
                cin >> names[index - 1];
                cout << "Name updated successfully." << endl;
            } else {
                cout << "Invalid index." << endl;
            }
        } else if (option == 4) { // Delete
            int index;
            cout << "Enter the index of the name to delete: ";
            cin >> index;
            if (index >= 1 && index <= count) {
                for (int i = index - 1; i < count - 1; i++) {
                    names[i] = names[i + 1];
                }
                count--;
                cout << "Name deleted successfully." << endl;
            } else {
                cout << "Invalid index." << endl;
            }
        } else if (option == 5) { // Exit
            break;
        } else {
            cout << "Invalid option. Please select a valid option." << endl;
        }
    }

    return 0;
}
