#include <iostream>

void calc(int* arr, int size){
    int left = 0;
    int c = 0;
    std::cout << "Enter a reference point: ";
    std::cin >> left;
    std::cout << "The number of elements in the array greater than " << left << ": ";
    for (int i = 0; i < size; i++) {
        if (arr[i] > left) {
            c++;
        }
    }
    std::cout << c;
}

int main() {
    int array[] = {14, 16, 19, 32, 32, 32, 56, 69, 72};
    int size = 9;


    calc(array, size);
    return 0;
}


