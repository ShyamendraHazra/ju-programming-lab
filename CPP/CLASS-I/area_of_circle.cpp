#include <iostream>

#define PI 3.14

class Circle {

    private:
	float area;
	float radius;
    protected:
	float calculate_area();
    public:
	void get_radius();
	void display();
};

float Circle::calculate_area() {
return PI * radius * radius;
}

void Circle::get_radius() {
    std::cout << "Enter the radius of the circle" << "\n";
    std::cin >> radius;
}

void Circle::display() {
    std::cout << "The area of the the circle is :: " <<   calculate_area() << " \n";
}

int main() {
    Circle crl;
    crl.get_radius();
    crl.display();

    return 0;
}
