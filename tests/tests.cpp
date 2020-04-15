#include "gtest/gtest.h"
#include "../rb_map.h"

TEST (Map, InsertionTest) {
    RbMap<int, int> map;
    map.insert(1, 2);
    map.insert(1, 3);
    map.insert(2, 4);
    map.insert(3, 10);
    ASSERT_EQ(map.get_length(), 3);
    ASSERT_EQ(map.get_length(), map.get_keys().get_length());
    ASSERT_EQ(map.get_length(), map.get_values().get_length());
}

TEST (Map, InsertAndRemoveTest) {
    RbMap<int, int> map;
    map.insert(1, 2);
    map.insert(1, 3);
    map.insert(2, 4);
    map.insert(3, 10);
    map.remove(1);
    ASSERT_EQ(map.get_length(), 2);
    ASSERT_EQ(map.get_length(), map.get_keys().get_length());
    ASSERT_EQ(map.get_length(), map.get_values().get_length());
}

TEST(Map, InsertAndRemoveAllTest) {
    RbMap<int, int> map;
    map.insert(1, 2);
    map.insert(1, 3);
    map.insert(2, 4);
    map.insert(3, 10);
    map.remove(1);
    map.remove(3);
    map.remove(2);
    ASSERT_EQ(map.get_length(), 0);
    ASSERT_EQ(map.get_length(), map.get_keys().get_length());
    ASSERT_EQ(map.get_length(), map.get_values().get_length());
}

TEST(Map, InsertAndClearTest) {
    RbMap<int, int> map;
    map.insert(1, 2);
    map.insert(1, 3);
    map.insert(2, 4);
    map.insert(3, 10);
    map.clear();
    ASSERT_EQ(map.get_length(), 0);
    ASSERT_EQ(map.get_length(), map.get_keys().get_length());
    ASSERT_EQ(map.get_length(), map.get_values().get_length());
}

TEST(Map, StringMapTest) {
    RbMap<std::string, std::string> map;
    map.insert("a", "value_b");
    map.insert("b", "value_b");
    map.insert("a", "value_c");
    map.insert("c", "value_a");
    ASSERT_EQ(map.get_length(), 3);
    ASSERT_EQ(map.get_length(), map.get_keys().get_length());
    ASSERT_EQ(map.get_length(), map.get_values().get_length());
}

TEST(Map, FindTest) {
    RbMap<int, int> map;
    map.insert(1, 2);
    map.insert(1, 3);
    map.insert(2, 4);
    map.insert(3, 10);
    ASSERT_EQ(map.get(3), 10);
}