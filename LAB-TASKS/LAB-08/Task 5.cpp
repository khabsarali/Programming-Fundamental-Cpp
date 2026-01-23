#include <iostream>
#include <iomanip> // for std::setprecision
using namespace std;

int main() {
    int categoryChoice, itemChoice, quantity;
    double price = 0, total = 0, discount = 0;

    cout << "Welcome to the Shopping System!\n\n";
    cout << "Select a Category:\n";
    cout << "1. Electronics\n";
    cout << "2. Clothing\n";
    cout << "3. Groceries\n";
    cout << "Enter your choice: ";
    cin >> categoryChoice;

    switch (categoryChoice) {
        case 1: // Electronics
            cout << "\nSelect an item:\n";
            cout << "1. Laptop ($1000)\n";
            cout << "2. Smartphone ($700)\n";
            cout << "3. Headphones ($150)\n";
            cout << "Enter your choice: ";
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: price = 1000; break;
                case 2: price = 700; break;
                case 3: price = 150; break;
                default:
                    cout << "Invalid item choice.\n";
                    return 0;
            }
            break;

        case 2: // Clothing
            cout << "\nSelect an item:\n";
            cout << "1. Jacket ($120)\n";
            cout << "2. T-shirt ($40)\n";
            cout << "3. Jeans ($60)\n";
            cout << "Enter your choice: ";
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: price = 120; break;
                case 2: price = 40; break;
                case 3: price = 60; break;
                default:
                    cout << "Invalid item choice.\n";
                    return 0;
            }
            break;

        case 3: // Groceries
            cout << "\nSelect an item:\n";
            cout << "1. Milk (1 Liter - $2)\n";
            cout << "2. Bread (1 Loaf - $3)\n";
            cout << "3. Eggs (1 Dozen - $5)\n";
            cout << "Enter your choice: ";
            cin >> itemChoice;
            switch (itemChoice) {
                case 1: price = 2; break;
                case 2: price = 3; break;
                case 3: price = 5; break;
                default:
                    cout << "Invalid item choice.\n";
                    return 0;
            }
            break;

        default:
            cout << "Invalid category choice.\n";
            return 0;
    }

    cout << "Enter quantity: ";
    cin >> quantity;

    total = price * quantity;

    // Apply discount
    if (total >= 100 && total <= 500) {
        discount = total * 0.10;
    } else if (total > 500) {
        discount = total * 0.20;
    }

    double finalAmount = total - discount;

    // Generate Invoice
    cout << "\n---------- Invoice ----------\n";
    cout << fixed << setprecision(2);
    cout << "Price per item: $" << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Total: $" << total << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Amount to Pay: $" << finalAmount << endl;
    cout << "------------------------------\n";

    return 0;
}

