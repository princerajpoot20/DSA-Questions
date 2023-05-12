#include <iostream>
#include <deque>
using namespace std;

enum Color {RED, BLACK};

struct Node {
    int data;
    bool color;
    Node *left, *right, *parent;

    Node(int data) {
        this->data = data;
        left = right = parent = nullptr;
        this->color = RED;
    }
};

class RBTree {
    private:
        Node *root;

    protected:
        void rotateLeft(Node *&, Node *&);
        void rotateRight(Node *&, Node *&);
        void fixInsertionViolation(Node *&, Node *&);

    public:
        RBTree() { root = nullptr; }
        void insert(const int& n);
        void inorder();
        void levelOrder();
};

// Helper functions and class methods go here (please copy from the previous response)

int main() {
    RBTree rbTree;

    // Sample input
    rbTree.insert(7);
    rbTree.insert(6);
    rbTree.insert(5);
    rbTree.insert(4);
    rbTree.insert(3);
    rbTree.insert(2);
    rbTree.insert(1);

    cout << "Inorder traversal of the created Red-Black Tree is: ";
    rbTree.inorder();
    cout << endl;

    cout << "Level Order traversal of the created Red-Black Tree is: ";
    rbTree.levelOrder();
    cout << endl;

    return 0;
}
