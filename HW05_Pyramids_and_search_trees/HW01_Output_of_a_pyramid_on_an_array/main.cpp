#include <iostream>

void print_pyramid( int *arr, int size) {

    int levels = 0;
    int index = 0;

while (index < size) {
int elementsInLevel = 1 << levels; // 2^levels
for (int i = 0; i < elementsInLevel && index < size; ++i) {
std::cout << "Level " << levels << " ";
if (levels == 0) {
std::cout << "(root): ";
} else {
std::cout << "(" << (i % 2 == 0 ? "left" : "right") << " child of " << (i / 2) << "): ";
}
std::cout << arr[index] << std::endl;
++index;
}
++levels;
}
}

int main()
{
    int arr[] = { 94, 67, 18, 44, 55, 12, 6, 42};
    int size = 8;
    print_pyramid(arr,size);
}