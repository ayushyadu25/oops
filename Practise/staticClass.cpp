<<<<<<< HEAD
#include <iostream>
using namespace std;
class A
{
    int x;

public:
    A()
    {
        cout << "A's constructor called " << endl;
    }
};
class B
{
    static A a;

public:
    B()
    {
        cout << "B's  constructor called " << endl;
    }
    static A getA()
    {

        return a;
    }
};

A B::a;
int main()
{
    B b1, b2, b3;
    b1.getA();
    return 0;
=======
#include <iostream>
using namespace std;
class A
{
    int x;

public:
    A()
    {
        cout << "A's constructor called " << endl;
    }
};
class B
{
    static A a;

public:
    B()
    {
        cout << "B's  constructor called " << endl;
    }
    static A getA()
    {

        return a;
    }
};

A B::a;
int main()
{
    B b1, b2, b3;
    b1.getA();
    return 0;
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01
}