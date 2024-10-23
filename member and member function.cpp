#include <iostream>
using namespace std;
class Counter {
private:
    static int count;  // Static data member, shared by all objects

public:
    // Constructor increments the counter when an object is created
    Counter() {
        count++;
    }

    // Static member function to return the current count
    static int getCount() {
        return count;
    }
};

// Definition of static data member
int Counter::count = 0;  // Must be initialized outside the class

int main() {
    // ---------- Creating objects   ------------
    Counter c1;
    Counter c2;
    Counter c3;

    // Accessing static member function using class name
    cout << "Number of Counter objects created: " << Counter::getCount() << endl;

    return 0;
}
