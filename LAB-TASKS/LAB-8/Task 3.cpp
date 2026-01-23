#include <iostream>
using namespace std;

int main()
{
    int choice;
    float area;

    cout << "Select a shape to calculate area:\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            float radius;
            cout << "Enter radius of the circle: ";
            cin >> radius;
            area = 3.14 * radius * radius;
            cout << "Area of Circle = " << area;
            break;
        }

        case 2:
        {
            float length, width;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            area = length * width;
            cout << "Area of Rectangle = " << area;
            break;
        }

        case 3:
        {
            float base, height;
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            area = 0.5 * base * height;
            cout << "Area of Triangle = " << area;
            break;
        }

        default:
            cout << "Error: Invalid choice. Please select 1, 2, or 3.";
    }

    return 0;
}

