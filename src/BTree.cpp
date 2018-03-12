//
// Created by Felix Klauke on 12.03.18.
//

#include "BTree.h"

BTree::BTree() = default;

BTreeNode *BTree::GetRootNode() {
    return rootNode;
}

void BTree::SetRootNode(BTreeNode *rootNode) {
    this->rootNode = rootNode;
}

BTreeNode *BTree::Search(int key) {
    if (rootNode == nullptr) {
        return nullptr;
    }

    return rootNode->Search(key);
}
