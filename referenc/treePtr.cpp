#include <iostream>
using namespace std;

class Node {
public:
  int val;
  Node* left;
  Node* right;

  Node() : val(0), left(nullptr), right(nullptr) {}
  Node(int val) : val(val), left(nullptr), right(nullptr) {}
  Node(int val, Node* left, Node* right) : val(val), left(left), right(right) {}
};

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

int main() {
  // TreeNode* root = new TreeNode(7);
  Node* root = new Node(7);

  cout << root->val << "\n";

  root->left = new Node(10);
  root->right = new Node(20);

  cout << root->left->val << " " << root->right->val << "\n";
}
