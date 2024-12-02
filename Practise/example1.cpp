<<<<<<< HEAD
#include <iostream>
using namespace std;
class Time
{
    int h;
    int m;

public:
    Time(int h,int m)
    {
        this->h=h;
        this->m=m;

    }
friend Time operator + (Time t);

};
Time operator + (Time t){
    Time t;
    temp.h = this->h+t.h;
=======
#include <iostream>
using namespace std;
class Time
{
    int h;
    int m;

public:
    Time(int h,int m)
    {
        this->h=h;
        this->m=m;

    }
friend Time operator + (Time t);

};
Time operator + (Time t){
    Time t;
    temp.h = this->h+t.h;
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01
}