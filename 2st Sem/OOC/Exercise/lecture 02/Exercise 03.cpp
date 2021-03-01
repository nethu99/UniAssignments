#include <iostream>
#include <iomanip>

int main() {

	float radius, area = 0, perimeter = 0;

	std::cout << "Input Radius of The Circle: ";
	std::cin >> radius;

	perimeter = 2 * ((22 / 7.0) * radius);

	area = ((22 / 7.0) * radius * radius);

	std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "Circle Area Is: " << area << std::endl;
	std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2) << "Circle Perimeter Is: " << perimeter << std::endl;

	return 0;
}
