#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

// Function to calculate the volume of a cone
double calculateConeVolume(double radius, double height) {
    return (1.0 / 3.0) * PI * std::pow(radius, 2) * height;
}

int main() {
    double radius, height;

    // Get the radius and height from the user
    std::cout << "Enter the radius of the cone: ";
    std::cin >> radius;

    std::cout << "Enter the height of the cone: ";
    std::cin >> height;

    // Calculate and display the volume of the cone
    double coneVolume = calculateConeVolume(radius, height);

    std::cout << "Volume of the cone: " << coneVolume << std::endl;

    return 0;
}
