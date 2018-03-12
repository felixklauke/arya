//
// Created by Felix Klauke on 12.03.18.
//

#ifndef ARYA_BTREENODE_H
#define ARYA_BTREENODE_H


#include <vector>

class BTreeNode {

private:
    std::vector<int> keys;
    std::vector<BTreeNode> children;
    bool leaf;

public:
    explicit BTreeNode(bool leaf);

    BTreeNode *Search(int key);
};


#endif //ARYA_BTREENODE_H
