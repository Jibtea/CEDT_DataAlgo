#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

class Tree{
    class Node{
        public:
            friend class Tree;
            Node() {data = -1; left = NULL; right = NULL;}
            Node(const int x, Node* left, Node* right) : data(x), left(left), right(right) {}

        protected:
            int data;
            Node* left;
            Node* right;
    };
public:

    Tree() {
        mRoot = NULL;
        mSize = 0;
    }

    ~Tree() {
        clear(mRoot);
    }

    void clear(Node*& r) {
        if (!r) return;
        clear(r->left);
        clear(r->right);
        delete r;
    }

    void insert(int x) {
        insertAt(mRoot, x);
    }
    bool treetraverse(Node* nodeA,Node* nodeB){
        if(nodeA==NULL && nodeB==NULL) {return true;}
        
        if((nodeA==NULL&&nodeB)||(nodeA&&nodeB==NULL)) return false;
        else if((nodeA->data != nodeB->data)||(nodeA->left && !nodeB->left) || (!nodeA->left && nodeB->left)||(nodeA->right && !nodeB->right) || (!nodeA->right && nodeB->right)) return false;

        return treetraverse(nodeA->left, nodeB->left) && treetraverse(nodeA->right, nodeB->right);
    }
    bool isSameBinaryTree(Tree& t) {
        // Insert your code here
        if(mSize==t.mSize){
            if(treetraverse(mRoot,t.mRoot)) return true;
            return false;
        }
    }
    // You can also put your code here

protected:
    void insertAt(Node*& r, int x) {
        if (!r) {
           r = new Node(x, NULL, NULL);
           mSize++;
           return;
        }
        if (r->data == x) return; // Do nothing
        if (x < r->data) insertAt(r->left, x); else
        insertAt(r->right, x);
    }
    Node* mRoot;
    int mSize;

};

#endif // TREE_H_INCLUDED
