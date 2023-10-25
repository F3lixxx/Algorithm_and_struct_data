#include <iostream>

void print_dynamic_array(int* arr, int logical_size, int actual_size) {

    // int *res = new int[logical_size];

    for (int i = 0; i < logical_size; i++) {
        std::cout << "arr [" << i + 0 << ']' << ' ';
        std::cin >> arr[i];
    }
    // delete[] res;
}



void print(int *arr, int logical_size, int actual_size) {
    std::cout << "Dynamic massive: ";
    for (int i = 0; i < logical_size; i++) {
        std::cout << arr[i] << ' ';
    }
    if (logical_size < actual_size) {
        for (int j = logical_size; j < actual_size; j++) {
            std::cout << "_ ";
        }
    }
}

int main() {
    int logical_size;
    int actual_size;
    std::cout << "Enter actual size";
    std::cin >> actual_size;
    std::cout << "Enter logic size";
    std::cin >> logical_size;

    if (logical_size > actual_size) {
        std::cout << "Logical size is bigger than actual size!";
    } else {
        int* array = new int[actual_size]; // Создаем фактический массив
        print_dynamic_array(array, logical_size, actual_size);
        print(array, logical_size, actual_size);
        delete[] array;
    }

    return 0;
}