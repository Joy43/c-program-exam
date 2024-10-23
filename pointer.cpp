#include <iostream>

int main() {
    int num = 10;      // Declare an integer variable
    int* ptr = &num;   // Pointer points to the address of num

    std::cout << "Value of num: " << num << std::endl;   // Outputs: 10
    std::cout << "Address of num: " << ptr << std::endl; // Outputs the memory address of num
    std::cout << "Value at the address: " << *ptr << std::endl; // Outputs: 10

    *ptr = 30; // Changing the value at the address stored in ptr
    std::cout << "New value of num: " << num << std::endl; // Outputs: 30

    return 0;
}
