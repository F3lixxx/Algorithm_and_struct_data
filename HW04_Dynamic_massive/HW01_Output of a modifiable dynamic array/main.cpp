#include <iostream>

void print_dynamic_array(int* arr, int logical_size, int actual_size) {
    for (int i = 0; i < logical_size; i++) {
        std::cout << "arr [" << i + 0 << ']' << ' ';
        std::cin >> arr[i];
    }
}

void append_to_dynamic_array(int* arr, int& logical_size, int actual_size) {
    if (logical_size >= actual_size) {
        // Массив заполнен, увеличьте его размер, например, вдвое.
        int new_size = actual_size * 2;
        int *new_array = new int[new_size];
        for (int i = 0; i < logical_size; i++) {
            new_array[i] = arr[i];
        }
        delete[] arr; // Удаляем старый массив.
        arr = new_array;
        actual_size = new_size; // Обновляем размер массива.
    }
    int new_element;

    std::cout << "\nEnter new element: ";
    std::cin >> new_element;
            arr[logical_size] = new_element;
            logical_size++;
        }




void print(int *arr, int logical_size, int actual_size) {
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
    int actual_size;
    int logical_size;
    std::cout << "Enter actual size";
    std::cin >> actual_size;
    std::cout << "Enter logic size";
    std::cin >> logical_size;
    int exit;


    if (logical_size > actual_size) {
        std::cout << "Logical size is bigger than actual size!";
    } else {
        int *array1 = new int[actual_size]; // Создаем фактический массив
        if (logical_size >= actual_size) {
            print_dynamic_array(array1, logical_size, actual_size);
            print(array1, logical_size, actual_size);
            append_to_dynamic_array(array1, logical_size, actual_size);
            print(array1, logical_size, actual_size);
            delete[] array1;
        }
    }
    return 0;
}