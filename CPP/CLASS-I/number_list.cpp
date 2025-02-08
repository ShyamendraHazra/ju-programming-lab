#include <iostream>
#include <algorithm>
using namespace std;

class Number_List {
    int *arr;
    int size;

public:
    void createArray(int n) {
        size = n;
        arr = new int[size];
        cout << "Enter " << size << " integers: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void sortArray() {
        sort(arr, arr + size);
        cout << "Sorted Array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void findMinMax() {
        cout << "Minimum: " << arr[0] << ", Maximum: " << arr[size - 1] << endl;
    }

    ~Number_List() {
        delete[] arr;
    }
};

int main() {
    Number_List list;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    list.createArray(n);
    list.sortArray();
    list.findMinMax();
    return 0;
}
