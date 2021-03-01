#include <iostream>

int main() {

	int lenght, width, perimeter = 0;

	std::cout << "Input The Length: ";
	std::cin >> lenght;
	std::cout << "Input The Width: ";
	std::cin >> width;
	
	perimeter = 2 * (lenght + width);

	std::cout << "Rectangle Perimeter is: " << perimeter << std::endl;

	return 0;
}

