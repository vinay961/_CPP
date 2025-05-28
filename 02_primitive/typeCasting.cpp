#include<iostream>
using namespace std;

int main() {
    int teaPrice = 49.99;
    // Implicit type casting from float to int
    int teaPriceInt = teaPrice; // This will truncate the decimal part, resulting in 49
    cout << "Tea Price (int): " << teaPriceInt << endl;

    // Explicit type casting from double to int
    double teaPriceDouble = 49.99;
    int teaPriceDoubleInt = static_cast<int>(teaPriceDouble); // This will also truncate the decimal part, resulting in 49
    cout << "Tea Price (double to int): " << teaPriceDoubleInt << endl;
    return 0; // Return 0 to indicate successful completion
}