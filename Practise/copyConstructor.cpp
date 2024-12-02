<<<<<<< HEAD
#include<iostream>
using namespace std;
class A{
    string name;
    int age;
public:
    A(){}
    // A(string name,int age){
    //     this->name=name;
    //     this->age=age;
    // }
    void set(string name,int age){
        this->name=name;
        this->age=age;
    }
    A(A &obj){
       name=obj.name;
       age=obj.age;
    }
    void display(){
        cout<<name<<endl<<age<<endl;
    }
};
int main(){
    A a1;
    a1.set("ayush",20);
    // A a2;
    A a2(a1);
    a2.display();
}

// in =,[],(),->,? operator overloading we cannot use friend function 
=======
#include<iostream>
using namespace std;
class A{
    string name;
    int age;
public:
    A(){}
    // A(string name,int age){
    //     this->name=name;
    //     this->age=age;
    // }
    void set(string name,int age){
        this->name=name;
        this->age=age;
    }
    A(A &obj){
       name=obj.name;
       age=obj.age;
    }
    void display(){
        cout<<name<<endl<<age<<endl;
    }
};
int main(){
    A a1;
    a1.set("ayush",20);
    // A a2;
    A a2(a1);
    a2.display();
}

// in =,[],(),->,? operator overloading we cannot use friend function 
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01
// 