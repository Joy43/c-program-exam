#include <iostream>
using namespace std;

int main() {
    try {
        double num1 = 8, num2;
        cout << "Enter the 2nd number : ";
        cin >> num2;
        if (num2 == 0) {
            throw -1;  // Throw an exception if division by zero is attempted
        }
        double result = num1 / num2;
        cout << "Result: " << result << endl;
    }
    catch (...) {
        // Catch any exception and print the error message
        cout << "Division by zero is not allowed. Please try another number." << endl;
    }
    
    return 0; // Return 0 to indicate successful program termination
}
