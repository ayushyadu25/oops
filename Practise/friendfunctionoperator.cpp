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
   friend Time operator ++(Time obj);
};
Time operator ++(Time obj){
    obj.h++;
    obj.m++;
    return obj;

}
int main(){
    Time t1;
    t1.setDetails();
    t1.display();
    t1=++t1;
    t1.display();
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
   friend Time operator ++(Time obj);
};
Time operator ++(Time obj){
    obj.h++;
    obj.m++;
    return obj;

}
int main(){
    Time t1;
    t1.setDetails();
    t1.display();
    t1=++t1;
    t1.display();
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01
}