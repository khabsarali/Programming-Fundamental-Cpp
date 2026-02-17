#include <iostream>
#include <limits>
using namespace std;

const int MAX = 10;

// Project data
int projectId[MAX], totalCost[MAX], upfrontPayment[MAX], pendingPayment[MAX], assignedEmp[MAX];
string projectName[MAX];
int projectCount = 0;

// Employee data
int empId[MAX], salary[MAX], salaryReceived[MAX];
string empName[MAX], designation[MAX];
string empPassword[MAX];   // Added password system
int empCount = 0;

// Expense data
int expenses[MAX];
int expenseCount = 0;

// Function prototypes
void clearInput();
int getValidatedInt();
void adminMenu();
void addEmployee();
void addProject();
void assignProject();
void addExpense();
void calculateBalance();
void employeeLogin();
bool employeeExists(int id);

int main() {
    int choice;

    do {
        cout << "\n--- Company Management System ---";
        cout << "\n1. Admin Login";
        cout << "\n2. Employee Login";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";

        choice = getValidatedInt();

        if (choice == 1) {
            string user, pass;
            cout << "Enter Admin Username: ";
            cin >> user;
            cout << "Enter Admin Password: ";
            cin >> pass;

            if (user == "absar" && pass == "absar12345") {
                adminMenu();
            } else {
                cout << "Invalid Admin Login!";
            }
        }
        else if (choice == 2) {
            employeeLogin();
        }

    } while (choice != 3);

    return 0;
}

// ---------------- INPUT VALIDATION ----------------
void clearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int getValidatedInt() {
    int value;
    while (!(cin >> value) || value < 0) {
        cout << "Invalid input! Enter a positive number: ";
        clearInput();
    }
    return value;
}

// ---------------- ADMIN MENU ----------------
void adminMenu() {
    int choice;
    do {
        cout << "\n\n--- Admin Menu ---";
        cout << "\n1. Add Employee";
        cout << "\n2. Add Project";
        cout << "\n3. Assign Project";
        cout << "\n4. Add Expense";
        cout << "\n5. Calculate Balance";
        cout << "\n6. Logout";
        cout << "\nEnter choice: ";

        choice = getValidatedInt();

        switch (choice) {
        case 1: addEmployee(); break;
        case 2: addProject(); break;
        case 3: assignProject(); break;
        case 4: addExpense(); break;
        case 5: calculateBalance(); break;
        }
    } while (choice != 6);
}

// ---------------- ADD EMPLOYEE ----------------
void addEmployee() {
    if (empCount >= MAX) {
        cout << "Employee limit reached!";
        return;
    }

    cout << "Enter Employee ID: ";
    empId[empCount] = getValidatedInt();

    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, empName[empCount]);

    cout << "Enter Designation: ";
    getline(cin, designation[empCount]);

    cout << "Set Employee Password: ";
    getline(cin, empPassword[empCount]);

    cout << "Enter Salary: ";
    salary[empCount] = getValidatedInt();

    cout << "Enter Salary Received: ";
    salaryReceived[empCount] = getValidatedInt();

    if (salaryReceived[empCount] > salary[empCount]) {
        cout << "Salary received cannot exceed total salary!";
        salaryReceived[empCount] = salary[empCount];
    }

    empCount++;
    cout << "Employee Added Successfully!";
}

// ---------------- ADD PROJECT ----------------
void addProject() {
    if (projectCount >= MAX) {
        cout << "Project limit reached!";
        return;
    }

    cout << "Enter Project ID: ";
    projectId[projectCount] = getValidatedInt();

    cin.ignore();
    cout << "Enter Project Name: ";
    getline(cin, projectName[projectCount]);

    cout << "Enter Total Cost: ";
    totalCost[projectCount] = getValidatedInt();

    cout << "Enter Upfront Payment: ";
    upfrontPayment[projectCount] = getValidatedInt();

    if (upfrontPayment[projectCount] > totalCost[projectCount]) {
        cout << "Upfront payment cannot exceed total cost!";
        upfrontPayment[projectCount] = totalCost[projectCount];
    }

    pendingPayment[projectCount] = totalCost[projectCount] - upfrontPayment[projectCount];
    assignedEmp[projectCount] = -1;

    projectCount++;
    cout << "Project Added Successfully!";
}

// ---------------- ASSIGN PROJECT ----------------
void assignProject() {
    int pid, eid;

    cout << "Enter Project ID: ";
    pid = getValidatedInt();

    cout << "Enter Employee ID: ";
    eid = getValidatedInt();

    if (!employeeExists(eid)) {
        cout << "Employee not found!";
        return;
    }

    for (int i = 0; i < projectCount; i++) {
        if (projectId[i] == pid) {
            assignedEmp[i] = eid;
            cout << "Project Assigned Successfully!";
            return;
        }
    }

    cout << "Project Not Found!";
}

bool employeeExists(int id) {
    for (int i = 0; i < empCount; i++) {
        if (empId[i] == id)
            return true;
    }
    return false;
}

// ---------------- ADD EXPENSE ----------------
void addExpense() {
    if (expenseCount >= MAX) {
        cout << "Expense limit reached!";
        return;
    }

    cout << "Enter Expense Amount: ";
    expenses[expenseCount] = getValidatedInt();

    expenseCount++;
    cout << "Expense Added!";
}

// ---------------- CALCULATE BALANCE ----------------
void calculateBalance() {
    int totalReceived = 0, totalExpense = 0, totalSalary = 0;

    for (int i = 0; i < projectCount; i++)
        totalReceived += upfrontPayment[i];

    for (int i = 0; i < expenseCount; i++)
        totalExpense += expenses[i];

    for (int i = 0; i < empCount; i++)
        totalSalary += salaryReceived[i];

    int balance = totalReceived - (totalExpense + totalSalary);

    cout << "\nTotal Received: " << totalReceived;
    cout << "\nTotal Expenses: " << totalExpense;
    cout << "\nTotal Salaries Paid: " << totalSalary;
    cout << "\nRemaining Balance: " << balance;
}

// ---------------- EMPLOYEE LOGIN ----------------
void employeeLogin() {
    string user, pass;

    cin.ignore();
    cout << "Enter Username: ";
    getline(cin, user);

    cout << "Enter Password: ";
    getline(cin, pass);

    for (int i = 0; i < empCount; i++) {
        if (empName[i] == user && empPassword[i] == pass) {

            cout << "\nWelcome " << empName[i];
            cout << "\nDesignation: " << designation[i];
            cout << "\nSalary: " << salary[i];
            cout << "\nSalary Received: " << salaryReceived[i];

            cout << "\n\n--- Assigned Projects ---";

            bool found = false;

            for (int j = 0; j < projectCount; j++) {
                if (assignedEmp[j] == empId[i]) {
                    cout << "\nProject ID: " << projectId[j];
                    cout << "\nProject Name: " << projectName[j];
                    found = true;
                }
            }

            if (!found)
                cout << "\nNo project assigned.";

            return;
        }
    }

    cout << "Invalid Employee Login!";
}

