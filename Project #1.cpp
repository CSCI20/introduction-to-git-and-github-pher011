#include <iostream> 

int main() { 

while (true) { 

double temp_f; 

std::cout << "Enter temperature in Fahrenheit: "; 

std::cin >> temp_f; 

double temp_k = (temp_f - 32.0) * 5.0 / 9.0 + 273.15; 

double temp_r = temp_f + 459.67; 

double temp_n = (temp_f - 32.0) * 5.45454555; 

std::cout << "Temperature in Kelvin: " << temp_k << " K" << std::endl; 

std::cout << "Temperature in Rankine: " << temp_r << " R" << std::endl; 

std::cout << "Temperature in Newton: " << temp_n << " N" << std::endl; 

} 

} 
