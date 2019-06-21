#ifndef B_TREE_THINGS_BTREENODE_H
#define B_TREE_THINGS_BTREENODE_H


/* A B-tree of order M.
 * A B-tree is always at least half full, has few levels, and is perfectly balanced.
 * Ideally, each node is as large as the size of a block in a system.*/
template <class T, int M>
class BTreeNode {
public:
    BTreeNode();
    BTreeNode(const T&);

private:
    bool leaf;
    int keyTally;
    T keys[M-1];
    BTreeNode *pointers[M];
    friend BTree<T,M>;
};


#endif //B_TREE_THINGS_BTREENODE_H
