#include <iostream>
#include <string>

unsigned int naiveHash(const std::string& input) {
    unsigned int hash = 0;

    for (char c : input) {
        hash += static_cast<unsigned int>(c);
    }

    return hash;
}

int main() {
    std::string data;
do {
    std::cout << "Enter word: ";
    std::cin >> data;
    unsigned int hashValue = naiveHash(data);
    std::cout << " hash for \"" << data << "\": " << hashValue << std::endl;
}
    while(data != "exit");
    return 0;
}
