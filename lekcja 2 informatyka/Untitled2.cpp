#include <iostream>
using namespace std;
int main() {
int liczba;
 
cout << "Podaj liczbe calkowita: ";
cin >> liczba;

cout << endl;

 if (liczba % 2 == 0) {
cout << "Liczba " << liczba << " jest parzysta.";
} else {
	cout << "Liczba " << liczba << " jest nieparzysta.";
}
cout << endl;
if (liczba % 3 == 0) {
	cout << "Liczba " << liczba << " dzieli sie przez 3.";
} else {
	cout << "Liczba " << liczba << " nie dzieli sie przez 3";
}

return 0;
}
