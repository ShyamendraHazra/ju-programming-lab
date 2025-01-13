#include <iostream>
using namespace std;

class Complex {
    int real, imaginary;

public:
    Complex() : real(0), imaginary(0) {}
    Complex(int r) : real(r), imaginary(0) {}
    Complex(int r, int i) : real(r), imaginary(i) {}

    void show() {
        cout << "Complex number: " << real << " + " << imaginary << "i" << endl;
    }

    Complex sum(Complex c) {
        return Complex(real + c.real, imaginary + c.imaginary);
    }
};

int main() {
    Complex c1(5, 3), c2(2, 4);
    Complex c3 = c1.sum(c2);
    c3.show();
    return 0;
}
