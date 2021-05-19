#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

vector<int> v;
void inorder(TreeNode *head, int i)
{
    if (head == nullptr)
        return;
    inorder(head->left, 2 * i + 1);
    v.push_back(head->val);
    inorder(head->right, 2 * i + 2);
}

void update(TreeNode *head, int i)
{
    if (head == nullptr)
        return;
    update(head->left, 2 * i + 1);
    head->val = v[i];
    update(head->right, 2 * i + 2);
}

int main()
{
    TreeNode *root = new TreeNode(4);
    root->right = new TreeNode(6);
    root->left = new TreeNode(1);
    //v = vector<int>(200, 0);
    inorder(root, 0);
    reverse(v.begin(), v.end());
    for (int i = 1; i < v.size(); i++)
    {
        v[i] += v[i - 1];
    }
    reverse(v.begin(), v.end());
    //update(root, 0);
    for (auto a : v)
    {
        cout << a << ' ';
    }
    cout << '\n';
}