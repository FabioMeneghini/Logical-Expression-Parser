#pragma once

#include "InfixOperator.h"

class Or: public InfixOperator {
public:
    Or(TreeNode* left, TreeNode* right);
    void print() override;
};