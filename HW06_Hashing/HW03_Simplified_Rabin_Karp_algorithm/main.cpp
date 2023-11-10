#include <iostream>
#include <string>

int find_substring_light_rabin_karp( const std::string& s, const std::string& p){

    for (int i = 0; i <= s.length() - p.length(); i++) {
        bool match = true;
        for (int j = 0; j < p.length(); j++) {
            if (s[i + j] != p[j]) {
                match = false;
            }
        }
        if (match) {
            return i;
        }
    }
    std::cout << "not found!" << std::endl;
    return -1;
}

int main() {
    std::string name;
    std::string find;
    std::cout << "Enter string: ";
    std::cin >> name;

    while (find != "exit") {
        std::cout << "Enter string to find: ";
        std::cin >> find;
        std::cout << "Position " << find << " is " <<  find_substring_light_rabin_karp(name, find) << std::endl;
    }
return 0;
}
