#include <iostream>
using namespace std;
int main(){
	float waga;
	cout << "Podaj swa wage w kg: ";
	cin >> waga;
	
	float wysokosc;
	cout << "Podaj swa wysokosc w metrach: ";
	cin >> wysokosc;
	
	int bmi = (waga / (wysokosc* wysokosc));
	
	cout << bmi << endl;
	
	if(bmi < 18.5) {
	cout << "Masz niedowage" << endl;
}
	else if((bmi >= 18.5) && (bmi <= 24.9) ) {
	cout << "Jestes w normie wagowej" << endl;
}
	else if((bmi >= 25) && (bmi <= 29.9) ) {
	cout << "Masz nadwage" << endl;
}
	else if(bmi >= 30) {
	cout << "Masz otylosc" << endl;
}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
