//
// Created by Felix Klauke on 12.03.18.
//

#ifndef ARYA_BTREE_H
#define ARYA_BTREE_H


#include "BTreeNode.h"

class BTree {

private:
    BTreeNode *rootNode;

public:
    BTree();

    BTreeNode *getRootNode();

    void setRootNode(BTreeNode *rootNode);
};


#endif //ARYA_BTREE_H
