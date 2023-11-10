#include <iostream>
#include <string>
#include <cmath>

unsigned int real_string_hash(const std::string& input, unsigned int p = 0, unsigned int n = 0) {
    long long hash = 0;
    if (input.empty()) {
        return hash;
    }

    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        int charCode = static_cast<unsigned int>(c);
        int power = static_cast<unsigned int>(pow(p, i));
        hash += charCode * power;
        hash %= n;
    }

    return hash;
}

int main() {
    std::string data;
    unsigned long int simple_num = 0;
    unsigned long int num = 0;
    std::cout << "Enter simple number: ";
    std::cin >> simple_num;
    std::cout << "Enter number: ";
    std::cin >> num;
    do {
        std::cout << "Enter word: ";
        std::cin >> data;
        unsigned int hashValue = real_string_hash(data, simple_num, num);
        std::cout << " hash for \"" << data << "\": " << hashValue << std::endl;
    }
    while(data != "exit");
    return 0;
}
