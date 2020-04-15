#include <map>
#include <iostream>
#include "gtest/gtest.h"

#include "rb_map.h"
#include "list.h"

int main() {

    RbMap<std::string, std::string> map;
    map.insert("a", "value_b");
    map.insert("b", "value_b");
    map.insert("a", "value_c");
    map.insert("c", "value_a");
    map.print();


    return 0;
}
