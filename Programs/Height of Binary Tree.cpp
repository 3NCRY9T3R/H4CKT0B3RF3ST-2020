#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;

BinaryTreeNode<int>* takeInput() {
    int rootData;
    cin >> rootData;
    if (rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while (!q.empty()) {
        BinaryTreeNode<int>* currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1) {
            BinaryTreeNode<int>* rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

int height(BinaryTreeNode<int>* root){
    int ans=0;
    if(root==NULL)
        return true;
    int lh = height(root->left);
    int rh = height(root->right);
    return 1+max(lh,rh);
}

bool isBalanced(BinaryTreeNode<int> *root) {
    // Write your code here
if(root==NULL)
        return true;
    bool ans = true;
    int lh=height(root->left);
    int rh=height(root->right);
    if(lh-rh<=1&&lh-rh>=-1){
        ans = isBalanced(root->left)&&isBalanced(root->right);
    }
    else{
        bool temp=false;
        if(temp==false)
           ans=false;
    }
    return ans;
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    cout << height(root);
}
