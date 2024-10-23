#include <iostream>
#include <cmath>  // Use this for pow() function
using namespace std;

int main() {
    float n, sum = 0.0, term;  // Initialize variables

    // Input the last number of the series
    cout << "Enter the last number of the series: ";
    cin >> n;

    // Calculate the sum of the series
    for (float i = 1; i <= n; i++) {
        term = pow((1 / i), i);  // Calculate each term in the series
        sum += term;  // Add the term to the sum
    }

    // Output the result
    cout << "The sum of the series is: " << sum << endl;

    return 0;  // Return from main
}
