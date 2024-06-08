#include <iostream>
using namespace std;

/**
 * Function to add two numbers
 * @param num1 The first number
 * @param num2 The second number
 * @return The sum of the two numbers
 */
double add(double num1, double num2) {
    return num1 + num2;
}

/**
 * Function to subtract two numbers
 * @param num1 The first number
 * @param num2 The second number
 * @return The difference of the two numbers
 */
double subtract(double num1, double num2) {
    return num1 - num2;
}

/**
 * Function to multiply two numbers
 * @param num1 The first number
 * @param num2 The second number
 * @return The product of the two numbers
 */
double multiply(double num1, double num2) {
    return num1 * num2;
}

/**
 * Function to divide two numbers
 * @param num1 The first number
 * @param num2 The second number
 * @return The quotient of the two numbers
 */
double divide(double num1, double num2) {
    if (num2!= 0) {
        return num1 / num2;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
}

int main() {
    double num1, num2;
    char operation;

    cout << "Welcome to the Simple Calculator Program!" << endl;
    cout << "---------------------------------------" << endl;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Error: Invalid operation. Please choose +, -, *, or /." << endl;
            break;
    }

    return 0;
}
