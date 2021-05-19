#include <bits/stdc++.h>

using namespace std;
using ll = long long;

class A
{
public:
    int a = 10;
    void fun()
    {
        cout << "A" << '\n';
    }
};

class B
{
public:
    void fun()
    {
        cout << "B" << '\n';
    }
};

class C
{
public:
    virtual int getArea() = 0;
};

class D : public A, public B
{
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    D d;

    d.fun();

    return 0;
}
