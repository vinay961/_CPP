#include<iostream>
#include<string>
using namespace std;

int main() {
    string teaName = "Green Tea \n"; // Using string to store a sequence of characters
    string teaDescription = "A refreshing beverage made from the leaves of the \"Camellia sinensis\" plant."; // Using escape character to include double quotes in the string

    cout<< teaName << teaDescription << endl; 

    string userTea;
    cout << "Enter your favorite tea: ";
    getline(cin, userTea);
    cout << "Your favorite tea is: " << userTea << endl;
    
    return 0; // Return 0 to indicate successful completion
}