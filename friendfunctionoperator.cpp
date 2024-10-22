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
}