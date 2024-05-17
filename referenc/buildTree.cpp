#include <iostream>
#include <queue>
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


Node* buildTree(Node* root) {
  
  cout << "Enter data ";
  int data; cin >> data;

  if (data == -1) return NULL;

  root = new Node(data);

  cout << "Enter data for left of " << root->val << " ";
  root->left = buildTree(root->left);

  cout << "Enter data for right of " << root->val << " ";
  root->right = buildTree(root->right);

  return root;
}

bool allNULL(queue<Node*> q) {
  while (!q.empty()) {
    if (q.front() != NULL) return false;
    q.pop();
  }
  return true;
}

int height = 0;

int getHeight(Node* root) {
  if (root == NULL) return 0;

  return 1 + max(getHeight(root->left), getHeight(root->right));
}

void printTabs(int height) {
  for (int i=0; i<height; i++) {
    cout << '\t';
  }
}

void printVal(Node* root, int height) {
  printTabs(height);
  if (root != NULL) {
    cout << root->val;
  }
  else cout << " ";
}

queue<Node*> q;
void printTree(Node* root) {

  // cout << root->val << " ";

  q.push(root);

  while (!q.empty()) {
    // printTabs(height);
    int sz = q.size();
    for (int i=0; i<sz; i++) {
      printVal(q.front(), height+1);

      if (q.front() != NULL) {
        q.push(q.front()->left);
        q.push(q.front()->right);
      }
      q.pop();
    }
    height--;
    cout << "\n";
    if (allNULL(q)) break;
  }
}

int main() {
  Node* root = NULL;

  root = buildTree(root);

  height = 0;
  height = getHeight(root);
  printTree(root);
}
