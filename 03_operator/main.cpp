#include<iostream>
using namespace std;

int main() {
    // Assignment operator
    int a = 5;
    a += 3; // a = a + 3
    a %= 2; // a = a % 2
    cout << "Value of a after operations: " << a << endl; // Output: 1

    // Arithmetic operators
    int b = 10;
    int c = 3;
    cout << "Addition: " << (b + c) << endl; // Output: 13
    cout << "Subtraction: " << (b - c) << endl; // Output: 7
    cout << "Multiplication: " << (b * c) << endl; // Output: 30
    cout << "Division: " << (b / c) << endl; // Output: 3
    cout << "Modulus: " << (b % c) << endl; // Output: 1
    // Increment and Decrement operators
    cout << "Pre-increment: " << (++b + b) << endl; // Output: 22
    cout << "Post-increment: " << (c++ + c) << endl; // Output: 23

    // Relational operators
    cout << "Is b greater than c? " << (b > c) << endl; // Output: 1
    cout << "Is b less than or equal to c? " << (b <= c) << endl; // Output: 0
    cout << "Is b equal to c? " << (b == c) << endl; // Output: 0
    cout << "Is b not equal to c? " << (b != c) << endl; // Output: 1

    // Logical operators
    cout << "Logical AND: " << (b > 5 && c < 5) << endl; // Output: 1 (true)
    cout << "Logical OR: " << (b < 5 || c < 5) << endl; // Output: 0 (false)
    cout << "Logical NOT: " << !(b < 5) << endl; // Output: 1 (true)

    // Bitwise operators
    int x = 5; // 0101 in binary
    int y = 3; // 0011 in binary
    cout << "Bitwise AND: " << (x & y) << endl; // Output: 1 (0001 in binary)
    cout << "Bitwise OR: " << (x | y) << endl; // Output: 7 (0111 in binary)
    cout << "Bitwise XOR: " << (x ^ y) << endl; // Output: 6 (0110 in binary)
    cout << "Bitwise NOT: " << (~x) << endl; // Output: -6 (inverts bits of 5)

    // Other operators
    int z = 10;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl; // Output: 4 bytes (typically)
    cout << "Address of z: " << &z << endl; // Output: memory address of z
    cout << "Ternary operator: " << ((z > 5) ? "Greater than 5" : "Less than 5") << endl; // Output: Greater than 5
    cout << "Comma operator: " << (a = 1, b = 2, a + b) << endl; // Output: 3 (evaluates a and b)

    return 0;
}