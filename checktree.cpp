#include <iostream>
#include <queue>

using namespace std;

struct Node {
int data;
Node* left;
Node* right;
};

Node* createNode(int data) {
Node* newNode = new Node();
if (!newNode) {
cout << "Memory error\n";
return NULL;
}
newNode->data = data;
newNode->left = newNode->right = NULL;
return newNode;
}

Node* buildTree(int n) {
if (n == 0) {
return NULL;
}

queue<Node*> q;
Node* root = createNode(1);
q.push(root);

int count = 2;
while (count <= n) {
Node* node = q.front();
q.pop();

node->left = createNode(count);
q.push(node->left);
count++;

if (count <= n) {
node->right = createNode(count);
q.push(node->right);
count++;
}
}
return root;
}

bool isFullBinaryTree(Node* root) {
if (root == NULL) {
return true;
}

if (root->left == NULL && root->right == NULL) {
return true;
}

if (root->left != NULL && root->right != NULL) {
return isFullBinaryTree(root->left) && isFullBinaryTree(root->right);
}

return false;
}

int findTreeDepth(Node* root) {
if (root == NULL) {
return 0;
}

int leftDepth = findTreeDepth(root->left);
int rightDepth = findTreeDepth(root->right);

return (leftDepth > rightDepth) ? (leftDepth + 1) : (rightDepth + 1);
}

bool isPerfectBinaryTree(Node* root, int depth, int level) {
if (root == NULL) {
return true;
}

if (root->left == NULL && root->right == NULL) {
return (depth == level + 1);
}

if (root->left == NULL || root->right == NULL) {
return false;
}

return isPerfectBinaryTree(root->left, depth, level + 1) && isPerfectBinaryTree(root->right, depth, level + 1);
}

int countNodes(Node* root) {
if (root == NULL) {
return 0;
}

return 1 + countNodes(root->left) + countNodes(root->right);
}

bool isCompleteBinaryTree(Node* root, int index, int count) {
if (root == NULL) {
return true;
}

if (index >= count) {
return false;
}

return isCompleteBinaryTree(root->left, 2 * index + 1, count) && isCompleteBinaryTree(root->right, 2 * index + 2, count);
}

int main() {
int n;
cout << "Enter the number of nodes in the binary tree: ";
cin >> n;

Node* root = buildTree(n);

if (isFullBinaryTree(root)) {
cout << "The binary tree is a full binary tree.\n";
} else {
cout << "The binary tree is not a full binary tree.\n";
}

int depth = findTreeDepth(root);
if (isPerfectBinaryTree(root, depth, 0)) {
cout << "The binary tree is a perfect binary tree with depth " << depth << ".\n";
} else {
cout << "The binary tree is not a perfect binary tree.\n";
}

int totalCount = countNodes(root);
if (isCompleteBinaryTree(root, 0, totalCount)) {
cout << "The binary tree is a complete binary tree.\n";
} else {
cout << "The binary tree is not a complete binary tree.\n";
}

return 0;
}