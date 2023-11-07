void append_to_dynamic_array(int*& arr, int& logical_size, int& actual_size) {
    if (logical_size >= actual_size) {
        int new_size = actual_size * 2;
        int* new_arr = new int[new_size];

        for (int j = 0; j < logical_size; ++j) {
            new_arr[j] = arr[j];
        }
        // Удалять новый массив здесь не нужно
        delete[] arr;
        arr = new_arr;
        actual_size = new_size;

        while (true) {
            std::cout << "\nEnter new element or X for exit: ";
            int new_element;
            std::cin >> new_element;
            if (new_element == 'x') {
                break;
            }

            arr[logical_size] = new_element;
            logical_size++;

            for (int i = 0; i < logical_size; i++) {
                std::cout << arr[i] << ' ';
            }
            for (int j = logical_size; j < actual_size; j++) {
                std::cout << "_ ";
            }
        }
    }
}
