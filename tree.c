#include <stdio.h>

struct tree
{
    int item;
    struct tree *parent;
    struct tree *left;
    struct tree *right;
} tree;

tree *search(tree *l, int x)
{
    if (l == NULL)
        return NULL;
    if (l->item == x)
        return l;
    if (x < l->item)
    {
        return (search(l->left, x));
    }
    else
    {
        return (search(l->right, x));
    }
}

tree *minimum(tree *t)
{
    tree *min;
    if (t == NULL)
        return NULL;
    while (t->left != NULL)
    {
        min = min->left;
    }
    return min;
}

tree *maximum(tree *t)
{
    tree *max;
    if (t == NULL)
        return NULL;
    while (t->left != NULL)
    {
        max = max->left;
    }
    return max;
}

tree *insert(tree **l, int x, *parent)
{
}
int main()
{
}