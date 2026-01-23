#include <iostream>
using namespace std;

int main()
{
    int choice;
    float usd, converted;

    cout << "Currency Converter (USD):\n";
    cout << "1. USD to PKR\n";
    cout << "2. USD to INR\n";
    cout << "3. USD to Euros\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    cout << "Enter amount in USD: ";
    cin >> usd;

    switch (choice)
    {
        case 1:
            converted = usd * 280;   // USD to PKR
            cout << "Amount in PKR = " << converted;
            break;

        case 2:
            converted = usd * 83;    // USD to INR
            cout << "Amount in INR = " << converted;
            break;

        case 3:
            converted = usd * 0.92;  // USD to Euro
            cout << "Amount in Euros = " << converted;
            break;

        default:
            cout << "Error: Invalid choice.";
    }

    return 0;
}

