//
// Created by Felix Klauke on 12.03.18.
//

#ifndef ARYA_BTREENODE_H
#define ARYA_BTREENODE_H


class BTreeNode {

private:
    int keys[];
    BTreeNode children[];
    bool leaf;

public:
    explicit BTreeNode(bool leaf);

    BTreeNode *Search(int key);
};


#endif //ARYA_BTREENODE_H
