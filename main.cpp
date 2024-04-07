#include <iostream>
#include <string>
#include "Lexer.h"
#include "Parser.h"
#include "TreeNode.h"

int main() {
    std::string input="(1 & 0) v (1 & 1)";

    Parser parser(input);
    TreeNode* root = parser.parseE();

    if (root == nullptr) {
        std::cout << "Invalid input" << std::endl;
    } else {
        root->print();
        std::cout << root->evaluate() << std::endl;
    }

    return 0;
}