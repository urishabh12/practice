#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    struct node *root = new node(10);
    root->left = new node(11);
    root->right = new node(20);
    root->left->left = new node(23);
    root->left->right = new node(8);
    root->right->left = new node(111);
    root->right->right = new node(33);

    return 0;
}
