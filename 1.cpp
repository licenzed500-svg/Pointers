
#include <iostream>

int main() {
    short a = 5, b = 3;
    short *ptr_a = &a, *ptr_b = &b;
    
    std::cout << "Address of ptr_a: " << &ptr_a << std::endl;
    std::cout << "Address of ptr_b: " << &ptr_b << std::endl;
    
    *ptr_a = *ptr_a + *ptr_b; // addition
    *ptr_b = *ptr_a - *ptr_b; // subtraction
    
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    return 0;
}
