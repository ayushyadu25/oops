<<<<<<< HEAD
#include<iostream>
using namespace std;
class A{
    int x,y;
    public:
    A(int x, int y){
        this->x=x;
        this->y=y;
    }
    void display(){
        cout<<x<<"_"<<y<<endl;
    }
    friend ostream& operator << (ostream &o1, A a1);
};

ostream& operator << (ostream &o1,const A a1){
        o1<<a1.x<<endl;
        o1<<a1.y;
        return o1;
    }
int main(){
    
    A o1(5,19);
    cout<<o1;

=======
#include<iostream>
using namespace std;
class A{
    int x,y;
    public:
    A(int x, int y){
        this->x=x;
        this->y=y;
    }
    void display(){
        cout<<x<<"_"<<y<<endl;
    }
    friend ostream& operator << (ostream &o1, A a1);
};

ostream& operator << (ostream &o1,const A a1){
        o1<<a1.x<<endl;
        o1<<a1.y;
        return o1;
    }
int main(){
    
    A o1(5,19);
    cout<<o1;

>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01
}