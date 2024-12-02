<<<<<<< HEAD
#include<iostream>
using namespace std;
class Time{
    int h;
    int m;
public:
    void setDetails(){
        cin >>h>>m;
    }
    void display(){
        cout<<"h:"<<h<<"m:"<<m<<endl;
    }
    void operator ++(int){
        ++h;
        ++m;
    }
};
int main(){
    Time t1;
    t1.setDetails();
    t1.display();
    t1++;
   
    t1.display();
    t1.operator++(0);
    t1.display();
    return 0;
=======
#include<iostream>
using namespace std;
class Time{
    int h;
    int m;
public:
    void setDetails(){
        cin >>h>>m;
    }
    void display(){
        cout<<"h:"<<h<<"m:"<<m<<endl;
    }
    void operator ++(int){
        ++h;
        ++m;
    }
};
int main(){
    Time t1;
    t1.setDetails();
    t1.display();
    t1++;
   
    t1.display();
    t1.operator++(0);
    t1.display();
    return 0;
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01
}