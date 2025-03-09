#include <iostream> 
int main() {
 int liczba; 
 std::cout << "Podaj Liczbe Calkowita: "; 
 std::cin >> liczba; 
 if (liczba % 2 == 0) { 
 std::cout << "Liczba " << liczba << " Jest parzysta." << std::endl; 
 } 
 else { 
 std::cout << "Liczba " << liczba << " Jest nieparzysta." << std::endl; 
 } 
 if (liczba % 3 == 0) { 
 std::cout << "Liczba " << liczba << " Jest podzielna przez 3." << std::endl; 
 }
  else { 
  std::cout << "Liczba " << liczba << " Nie jest podzielna przez 3." << std::endl; 
  }
  
  
  
   return 0; }
