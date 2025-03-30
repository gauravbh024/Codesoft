#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    // Display a welcome message
    cout << "Welcome to Simple Calculator!\n";
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Display operation choices
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Perform calculation based on user input
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error! Division by zero is not allowed." << endl;
                return 1;
            }
            break;
        default:
            cout << "Invalid operation! Please enter +, -, *, or /." << endl;
            return 1;
    }

    // Display result
    cout << "Result: " << result << endl;
    cout << "Thank you for using the calculator!\n";
    return 0;
}
