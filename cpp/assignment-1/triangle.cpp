#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
    float a, b, c;

public:
    void inputSides() {
        cout << "Enter the sides of the triangle: ";
        cin >> a >> b >> c;
    }

    void calculateArea();

    void calculatePerimeter() {
        float perimeter = a + b + c;
        cout << "Perimeter of the Triangle: " << perimeter << endl;
    }
};

void Triangle::calculateArea() {
    float s = (a + b + c) / 2;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area of the Triangle: " << area << endl;
}

int main() {
    Triangle t;
    t.inputSides();
    t.calculateArea();
    t.calculatePerimeter();
    return 0;
}
