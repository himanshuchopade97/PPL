#include <iostream>
#include <iomanip>
using namespace std;

class Item {
    int itemcode[50];
    string itemname[50];
    float itemprice[50];
    int quantity[50];
    bool active[50]; // Added active flag
    int count;

public:
    Item() {
        count = 0;
    }

    void cntzero() {
        count = 0;
    }

    void getitem() {
        cout << "Enter item code: ";
        cin >> itemcode[count];
        cout << "Enter item name: ";
        cin.ignore();
        getline(cin, itemname[count]);
        cout << "Enter item price: ";
        cin >> itemprice[count];
        cout << "Enter quantity: ";
        cin >> quantity[count];
        active[count] = true; // Mark the item as active
        count++;
    }

    void displaysum() {
        float total = 0;
        for (int i = 0; i < count; i++) {
            if (active[i]) {
                total += itemprice[i] * quantity[i];
            }
        }
        cout << "Total value of all items: Rs." << total << endl;
    }

    void remove() {
        int code;
        cout << "Enter item code to remove: ";
        cin >> code;

        for (int i = 0; i < count; i++) {
            if (itemcode[i] == code && active[i]) {
                active[i] = false; // Mark the item as inactive
                cout << "Item removed successfully." << endl;
                return;
            }
        }

        cout << "Item with code " << code << " not found or already removed." << endl;
    }

    void displayitems() {
        cout << left << setw(10) << "Code" << setw(20) << "Item Name" << setw(10) << "Quantity" << setw(10) << "Price" << setw(10) << "Total" << endl;
        
        for (int i = 0; i < count; i++) {
            if (active[i]) {
                cout << left << setw(10) << itemcode[i] << setw(20) << itemname[i] << setw(10) << quantity[i] << setw(10) << itemprice[i] << setw(10) << itemprice[i] * quantity[i] << endl;

            }
        }
        displaysum();
       
    }
};

int main() {
    Item shoppingList;
    int choice;

    do {
        cout << "\nMenu:\n1. Add an item\n2. Display total value\n3. Delete an item\n4. Display all items\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                shoppingList.getitem();
                break;
            case 2:
                shoppingList.displaysum();
                break;
            case 3:
                shoppingList.remove();
                break;
            case 4:
                shoppingList.displayitems();
                break;
            case 5:
                cout << "Exiting program.";
                break;
            default:
                cout << "Invalid choice. Try again.";
        }

    } while (choice != 5);

    return 0;
}
