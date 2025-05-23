#include <iostream>
using namespace std;

int main() {
    const int b = 20; 
    int a = 10; 
    const int *p = &a; 
    // b = 30; // This line will cause a compilation error because 'b' is a const variable

    cout << "Value of a: " << a << endl; // Output the value of 'a'
    cout << "Value of b: " << b << endl; // Output the value of 'b'
    cout << "Value of p: " << *p << endl; // Output the value pointed to by 'p'
    cout << "Address of a: " << &a << endl; // Output the address of 'a'

    return 0; // Return 0 to indicate successful completion
}