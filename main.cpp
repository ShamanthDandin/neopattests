//ABDUL
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    int height;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr), height(1) {}
};

int getHeight(TreeNode* node) {
    return node ? node->height : 0;
}

int getBalance(TreeNode* node) {
    return node ? getHeight(node->left) - getHeight(node->right) : 0;
}

TreeNode* rotateRight(TreeNode* y) {
    TreeNode* x = y->left;
    TreeNode* T2 = x->right;
    x->right = y;
    y->left = T2;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    return x;
}

TreeNode* rotateLeft(TreeNode* x) {
    TreeNode* y = x->right;
    TreeNode* T2 = y->left;
    y->left = x;
    x->right = T2;
    x->height = max(getHeight(x->left), getHeight(x->right)) + 1;
    y->height = max(getHeight(y->left), getHeight(y->right)) + 1;
    return y;
}

TreeNode* insert(TreeNode* node, int key) {
    if (!node) return new TreeNode(key);
    if (key < node->val)
        node->left = insert(node->left, key);
    else if (key > node->val)
        node->right = insert(node->right, key);
    else
        return node;

    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int balance = getBalance(node);

    if (balance > 1 && key < node->left->val)
        return rotateRight(node);

 
    if (balance < -1 && key > node->right->val)
        return rotateLeft(node);
 
    if (balance > 1 && key > node->left->val) {
        node->left = rotateLeft(node->left);
        return rotateRight(node);
    }

    if (balance < -1 && key < node->right->val) {
        node->right = rotateRight(node->right);
        return rotateLeft(node);
    }

    return node;
}

void preOrder(TreeNode* root) {
    if (!root) return;
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    int n;
    cin >> n;

    vector<int> plants(n);
    for (int i = 0; i < n; ++i)
        cin >> plants[i];

    TreeNode* root = nullptr;
    for (int code : plants)
        root = insert(root, code);

    preOrder(root);
    cout << endl;

    return 0;
}


// Koyal
import java.util.*;

class Solution{
     public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      int n = sc.nextInt();
      if(n > 0){
         for(int i = 0; i < n-1;i++){
            System.out.print(sc.nextInt()+" ");
         }
      } else {
System.out.println("Tree is empty");
      }
     }
}

//Thiru
#include<bits/stdc++.h>
using namespace std;
Node* insert(Node* root,char val);
void inOrder(Node* root);

struct Node{
char data;
Node* left;
Node* right;
Node(char val)
{
   data = val;
   left = nullptr;
   right = nullptr;
};
Node* insert(Node* root,char val){
 if(root == nullptr)
{
return new Node(val);
}
if(val < root->data){
root -> left = insert(root->left,val);
}
else if(val >root->data){
root -> right = insert(root -> right,val)
 }
return root;
}

void inOrder(Node* root){
 if(root == nullptr) return;
inOrder(root->left);
cout<<root->data<<" ";
inOrder(root->right);
}

int main(){
 int n;
cin >> n;
cin.ignore();
string line;
getline(cin,line);
istringstream iss(line);

Node* root = nullptr;
char c;
while(iss >> c)
{
root = insert(root,c);
}
inOrder(root);
cout<<'\n';
return 0;
}
