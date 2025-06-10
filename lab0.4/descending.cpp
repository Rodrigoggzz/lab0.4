#include<iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4;
    int Swap;
    char again = 'Y';

    while (again == 'Y') {
        cout << "Enter four numbers:" << endl;
        cout << "Number 1: ";
        cin >> num1;
        cout << "Number 2: ";
        cin >> num2;
        cout << "Number 3: ";
        cin >> num3;
        cout << "Number 4: ";
        cin >> num4;

        
        if (num1 < num2) {
            Swap = num1;
            num1 = num2;
            num2 = Swap;
        }
        if (num2 < num3) {
            Swap = num2;
            num2 = num3;
            num3 = Swap;
        }
        if (num3 < num4) {
            Swap = num3;
            num3 = num4;
            num4 = Swap;
        }
        if (num1 < num2) {
            Swap = num1;
            num1 = num2;
            num2 = Swap;
        }
        if (num2 < num3) {
            Swap = num2;
            num2 = num3;
            num3 = Swap;
        }
        if (num1 < num2) {
            Swap = num1;
            num1 = num2;
            num2 = Swap;
        }

        cout << "\nNumbers in decreasing order: ";
        cout << num1 << ", " << num2 << ", " << num3 << ", " << num4 << endl;

        cout << "Again?";
        cin >> again;
    }

    return 0;
}
