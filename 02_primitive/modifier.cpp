#include<iostream>
using namespace std;

int main() {
    // int teaUnits = -5; // Negative value to demonstrate modifier
    unsigned int teaUnits = -10; // Unsigned modifier to ensure non-negative value, when assigned a negative value, it wraps around to a large positive value.
    // long teaUnits = 1000000000; // Long modifier for larger range
    // long long teaUnits = 1000000000000; // Long long modifier for even larger range
    // short teaUnits = 30000; // Short modifier for smaller range
    // signed int teaUnits = -20; // Signed modifier to allow negative values, but this is the default for int

    cout<< "Initial tea units: " << teaUnits << endl;
    return 0;
}