//
// Created by Felix Klauke on 12.03.18.
//

#include "BTree.h"

BTree::BTree() = default;

BTreeNode *BTree::getRootNode() {
    return rootNode;
}

void BTree::setRootNode(BTreeNode *rootNode) {
    this->rootNode = rootNode;
}
