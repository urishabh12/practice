#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct Node
{
    int val;
    Node *left;
    Node *right;
    Node() : val(0), left(nullptr), right(nullptr) {}
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
};

Node *solve(int i, vector<int> &preorder)
{
    vector<int> left;
    vector<int> right;
    for (int a : preorder)
    {
        if (a < i)
            left.push_back(a);
        else if (a > i)
            right.push_back(a);
    }
    Node *tmp = new Node(i);
    if (left.size() > 0)
        tmp->left = solve(left[0], left);
    if (right.size() > 0)
        tmp->right = solve(right[0], right);

    return tmp;
}

void inorder(Node *head)
{
    if (head == nullptr)
        return;
    inorder(head->left);
    cout << head->val << " ";
    inorder(head->right);
}

int main()
{
    vector<int> preorder = {8, 5, 1, 7, 10, 12};

    Node *start = solve(preorder[0], preorder);

    inorder(start);
    cout << '\n';

    return 0;
}
