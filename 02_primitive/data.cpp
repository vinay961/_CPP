#include <iostream>

using namespace std;

int main(){
    int teaLeaves = 50;
    float waterTemperature = 85.5;
    double priceOfTea = 2.99;
    char teaType = 'GR'; // G for Green tea
    bool isTeaReady = true;
    
    cout<< teaType << endl; // here we get output as 'R'. Now we think that why we are getting 'R' as output. The reason is that char can only store one character. So, it will take the last character of the string and print it.Now why it take last character because in memory it will take only one byte and the last character will be stored in that byte. So, it will print the last character of the string.

    return 0; // Return 0 to indicate successful completion
}