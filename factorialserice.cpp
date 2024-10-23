#include <iostream>
#include <cmath>  // For standard math functions
using namespace std;

double cosineSeries(double x, int terms) {
    double cosx = 1;
    double term = 1;
    
    for (int i = 1; i <= terms; i++) {
        term *= -x * x / (2 * i * (2 * i - 1));  // Efficient calculation of each term
        cosx += term;
    }
    
    return cosx;
}

int main() {
    double x;
    int terms;

    cout << "Enter the value of x (in radians): ";
    cin >> x;

    cout << "Enter the number of terms to compute: ";
    cin >> terms;

    double result = cosineSeries(x, terms);
    cout << "The approximated value of cos(" << x << ") using " << terms << " terms is: " << result << endl;
    cout << "The actual value of cos(" << x << ") is: " << cos(x) << endl;

    return 0;
}
