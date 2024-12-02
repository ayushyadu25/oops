<<<<<<< HEAD
#include <iostream>
using namespace std;
class A
{

    const double pi;
    double radius;

public:
    A() : pi(3.14)
    {
        radius = 0.0;
    }
    A(double radius) : pi(3.14), radius(radius)
    {

    }
    void calArea()
    {
        double area = pi * radius * radius;
        cout << area << endl;
    }
    double getPi() const
    {
        return pi;
    }
    double getArea() const
    {
        return pi * radius * radius;
    }
};
int main()
{
    const A o1(4.3);
    o1.getArea(); // it cannot call non const function(not in case of non const
                  // data member) in class
                  // it can only call const function in class
    cout << o1.getArea() << endl;
    A o2(4.0);    // calls both const member + non constant member
    cout << o2.getArea();
}
=======
#include <iostream>
using namespace std;
class A
{

    const double pi;
    double radius;

public:
    A() : pi(3.14)
    {
        radius = 0.0;
    }
    A(double radius) : pi(3.14), radius(radius)
    {

    }
    void calArea()
    {
        double area = pi * radius * radius;
        cout << area << endl;
    }
    double getPi() const
    {
        return pi;
    }
    double getArea() const
    {
        return pi * radius * radius;
    }
};
int main()
{
    const A o1(4.3);
    o1.getArea(); // it cannot call non const function(not in case of non const
                  // data member) in class
                  // it can only call const function in class
    cout << o1.getArea() << endl;
    A o2(4.0);    // calls both const member + non constant member
    cout << o2.getArea();
}
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01
