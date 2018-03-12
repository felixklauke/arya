//
// Created by Felix Klauke on 12.03.18.
//

#include <BTreeNode.h>

BTreeNode::BTreeNode(bool isLeaf) : leaf(isLeaf) {

}

BTreeNode *BTreeNode::Search(int key) {
    int current = 0;

    while (current < keys.size() && key > keys.at(static_cast<unsigned long>(current))) {
        current++;
    }

    if (keys[current] == key) {
        return this;
    }

    return leaf ? nullptr : children[current];
}
