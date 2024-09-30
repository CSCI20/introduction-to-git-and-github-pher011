// Date: September 20, 2024 

// Description: This program reads a temperature in Fahrenheit and calculates its equivalent values in Kelvin, Rankine, and Newton scales. It loops continuously until closed by the user. 

#include <iostream> 

int main() { 

while (true) { 

// Variable to store the temperature in Fahrenheit 

double temp_f; 

// Prompt user for input 

std::cout << "Enter temperature in Fahrenheit: "; 

// Read user input 

std::cin >> temp_f; 

// Variable to store temperature in Kelvin, and its calculation 

double temp_k = (temp_f - 32.0) * 5.0 / 9.0 + 273.15; 

// Variable to store temperature in Rankine, and its calculation 

double temp_r = temp_f + 459.67; 

// Variable to store temperature in Newton, and its calculation 

double temp_n = (temp_f - 32.0) * 5.45454555; 

// Output the results 

std::cout << "Temperature in Kelvin: " << temp_k << " K" << std::endl; 

std::cout << "Temperature in Rankine: " << temp_r << " R" << std::endl; 

std::cout << "Temperature in Newton: " << temp_n << " N" << std::endl; 

} 

// End of the main function 

return 0; 

} 
