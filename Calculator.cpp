#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    void input() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    void add() {
        cout << "Result: " << num1 + num2 << endl;
    }

    void subtract() {
        cout << "Result: " << num1 - num2 << endl;
    }

    void multiply() {
        cout << "Result: " << num1 * num2 << endl;
    }

    void divide() {
        if (num2 != 0)
            cout << "Result: " << num1 / num2 << endl;
        else
            cout << "Error: Cannot divide by zero.\n";
    }

    void modulus() {
        if ((int)num2 != 0)
            cout << "Result: " << (int)num1 % (int)num2 << endl;
        else
            cout << "Error: Cannot perform modulus by zero.\n";
    }
};

int main() {
    Calculator calc;
    int choice;

    do {
        cout << "\n=== Simple Calculator ===\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Modulus\n";
        cout << "0. Exit\n";
        cout << "Choose an operation: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5)
            calc.input();

        switch (choice) {
            case 1: calc.add(); break;
            case 2: calc.subtract(); break;
            case 3: calc.multiply(); break;
            case 4: calc.divide(); break;
            case 5: calc.modulus(); break;
            case 0: cout << "Calculator closed.\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
