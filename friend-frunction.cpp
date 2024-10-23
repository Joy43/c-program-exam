#include <iostream>
using namespace std;

class classB;  // Forward declaration of classB

class classA {
private:
    int valueA;  // Fixed the variable name
public:
    classA(int a) : valueA(a) {}  // Constructor with initializer list

    // Declare friend function
    friend int add(classA, classB);
};

class classB {


    int valueB;  // Fixed the variable name
public:
    classB(int b) : valueB(b) {}  // Constructor with initializer list

    // Declare friend function
    friend int add(classA, classB);
};

// Define the friend function
int add(classA a, classB b) {
    return a.valueA + b.valueB;
}

int main() {
    classA objectA(10);
    classB objectB(20);

    // Call the add function and display the result
    cout << "The sum of the private data from both classes is: " << add(objectA, objectB) << endl;

    return 0;
}
