#include <map>
#include <iostream>
#include "gtest/gtest.h"

#include "rb_map.h"
#include "list.h"

int main() {
    RbMap<std::string, std::string> map;

    int command = 0;
    std::string key;
    std::string value;
    while (true) {
        std::cout << "\n\n1 - add element\n2 - remove element\nother - exit\n";
        std::cin >> command;
        switch(command) {
            case 1:
                std::cout << "enter key:";
                std::cin >> key;
                std::cout << "enter value:";
                std::cin >> value;
                map.insert(key, value);
                break;
            case 2:
                std::cout << "enter key:";
                std::cin >> key;
                map.remove(key);
                break;
            default:
                return 0;
        }
        std::cout << "output: ";
        map.print();
        map.debug();
    }

    return 0;
}
