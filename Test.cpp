#include "doctest.h"
#include "BinaryTree.hpp"
using namespace ariel;
#include <string>


TEST_CASE("FIRST test") {
    BinaryTree<std::string> tree;
    CHECK_NOTHROW(tree.add_root("first_node"));
    CHECK_NOTHROW(tree.add_root("secound_node"));
    CHECK_NOTHROW(tree.add_root("third_node"));
    CHECK_NOTHROW(tree.add_root("fourth_node"));
    CHECK_NOTHROW(tree.add_root("fifth_node"));
    CHECK_NOTHROW(tree.add_root("sixth_node"));
}

TEST_CASE("SECOND TEST") {
    BinaryTree<int> tree;
    tree.add_root(0);
    CHECK_NOTHROW(tree.add_left(0,1));
    CHECK_NOTHROW(tree.add_left(1,9));
    CHECK_NOTHROW(tree.add_left(9,91));
    CHECK_NOTHROW(tree.add_left(0,2));
    CHECK_THROWS(tree.add_left(7,8));
    CHECK_THROWS(tree.add_left(19,2));
    CHECK_THROWS(tree.add_left(100,100));
}

TEST_CASE("THIRD TEST") {
   BinaryTree<char> tree;
    tree.add_root('a');
    CHECK_NOTHROW(tree.add_left('a','b'));
    CHECK_NOTHROW(tree.add_left('b','c'));
    CHECK_NOTHROW(tree.add_left('c','d'));
    CHECK_NOTHROW(tree.add_left('d','f'));
    CHECK_THROWS(tree.add_left('n','g'));
    CHECK_THROWS(tree.add_left('k','t'));
    CHECK_THROWS(tree.add_left('s','x'));
}