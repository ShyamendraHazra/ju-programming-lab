#include <iostream>
using namespace std;

class Pattern {
public:
    void printPattern() {
        for (int i = 11; i >= 1; i -= 2) {
	    for(int k = 0; k < 11 - i; k+=2) {
		cout << " ";
	    }
            for (int j = 0; j < i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    Pattern p;
    p.printPattern();
    return 0;
}
