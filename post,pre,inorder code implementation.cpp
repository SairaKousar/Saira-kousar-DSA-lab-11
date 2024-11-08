#include <iostream>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;
};

node* newNode(int data) {
    node* Node = new node();
    Node->data = data;
    Node->left = Node->right = NULL;
    return Node;
}

class Tree {
    private:
        node* head;
    
    public:
        Tree() : head(NULL) {}
        
        void setRoot(int data) {
            head = newNode(data);
        }
        
        node* getRoot() {
            return head;
        }

        // Preorder traversal
        void traversePreOrder(node* temp) {
            if (temp != NULL) {
                cout << " " << temp->data;
                traversePreOrder(temp->left);
                traversePreOrder(temp->right);
            }
        }

        // Inorder traversal
        void traverseInOrder(node* temp) {
            if (temp != NULL) {
                traverseInOrder(temp->left);
                cout << " " << temp->data;
                traverseInOrder(temp->right);
            }
        }

        // Postorder traversal
        void traversePostOrder(node* temp) {
            if (temp != NULL) {
                traversePostOrder(temp->left);
                traversePostOrder(temp->right);
                cout << " " << temp->data;
            }
        }
};

int main() {
    Tree tree;
    tree.setRoot(1);
    node* root = tree.getRoot();
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);

    cout << "Preorder traversal: ";
    tree.traversePreOrder(root);
    cout << "\nInorder traversal: ";
    tree.traverseInOrder(root);
    cout << "\nPostorder traversal: ";
    tree.traversePostOrder(root);
    
    return 0;
}