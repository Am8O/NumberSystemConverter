#include <iostream>
#include <cmath>
using namespace std;

int DecimalToBase(int decimal, int base);
int BaseToDecimal(int number, int base);
int BaseToBase(int number, int sourceBase, int targetBase);
void ShowMenu();

int main() {
    int choice;

    do {
        ShowMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int decimal, base;
                cout << "Enter decimal number: ";
                cin >> decimal;
                cout << "Enter target base (2-9): ";
                cin >> base;

                if (base < 2 || base > 9) {
                    cout << "Error: Base must be between 2 and 9.\n";
                } else {
                    cout << "Result: " << DecimalToBase(decimal, base) << endl;
                }
                break;
            }

            case 2: {
                int number, base;
                cout << "Enter number: ";
                cin >> number;
                cout << "Enter its base (2-9): ";
                cin >> base;

                if (base < 2 || base > 9) {
                    cout << "Error: Base must be between 2 and 9.\n";
                } else {
                    cout << "Result: " << BaseToDecimal(number, base) << endl;
                }
                break;
            }

            case 3: {
                int number, sourceBase, targetBase;
                cout << "Enter number: ";
                cin >> number;
                cout << "Enter source base (2-9): ";
                cin >> sourceBase;
                cout << "Enter target base (2-9): ";
                cin >> targetBase;

                if (sourceBase < 2 || sourceBase > 9 ||
                    targetBase < 2 || targetBase > 9) {
                    cout << "Error: Bases must be between 2 and 9.\n";
                } else {
                    cout << "Result: " 
                         << BaseToBase(number, sourceBase, targetBase) << endl;
                }
                break;
            }

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }

    } while (choice != 4);

    return 0;
}

void ShowMenu() {
    cout << "\n===== Number System Conversion =====\n";
    cout << "1. Decimal to Base (2-9)\n";
    cout << "2. Base (2-9) to Decimal\n";
    cout << "3. Base to Base (2-9)\n";
    cout << "4. Exit\n";
}

int DecimalToBase(int decimal, int base) {
    if (base < 2 || base > 9) {
        cout << "Error: Base must be between 2 and 9.\n";
        return -1;
    }

    int result = 0;
    int multiplier = 1;

    while (decimal > 0) {
        int remainder = decimal % base;
        result = result + (remainder * multiplier);
        decimal = decimal / base;
        multiplier *= 10;
    }

    return result;
}

int BaseToDecimal(int number, int base) {
    if (base < 2 || base > 9) {
        cout << "Error: Base must be between 2 and 9.\n";
        return -1; 
    }

    int decimal = 0;
    int power = 0;

    while (number > 0) {
        int digit = number % 10;         
        decimal += digit * pow(base, power);  
        power++;                          
        number = number / 10;             
    }

    return decimal;
}

int BaseToBase(int number, int sourceBase, int targetBase) {
    if (sourceBase < 2 || sourceBase > 9 ||
        targetBase < 2 || targetBase > 9) {
        cout << "Error: Bases must be between 2 and 9.\n";
        return -1;
    }

    int decimal = BaseToDecimal(number, sourceBase);
    int result = DecimalToBase(decimal, targetBase);
    return result;
}