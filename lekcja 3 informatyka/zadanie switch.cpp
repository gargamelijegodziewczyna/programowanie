#include <iostream>
using namespace std;
 
int main() {
    double celsius, result;
    char choice;
 
    // Input temperature in Celsius
    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsius;
 
    // Display options to the user
    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> choice;
 
    // Perform the conversion based on user's choice
    switch (choice) {
        case 'K': // Celsius to Kelvin
        case 'k':
            result = celsius + 273.15;
            cout << "Temperatura w stopniach Kelvina: " << result << endl;
            break;
 
        case 'F': // Celsius to Fahrenheit
        case 'f':
            result = (celsius * 9/5) + 32;
            cout << "Temperatura w stopniach Fahrenheita: " << result << endl;
            break;
 
        default: // Invalid option
            cout << "Nieprawidlowa opcja! Sprobuj ponownie." << endl;
            break;
    }
 
    return 0;
}