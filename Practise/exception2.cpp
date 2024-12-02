<<<<<<< HEAD
#include<iostream>
#include<exception>
using namespace std;
class Person{
string name;
double balance;
int accNo;
public:
Person(string name, double balance,int  accNo){
    this->name = name;
    this->balance=balance;
    this->accNo=accNo;
}
void deposit(int amount){
    if(amount>0){
        balance+=amount;
        cout<<"Your balance is: "<<balance<<endl;

    }
    else{
        throw "Amount  is less than 0";
    }
}
void withdraw(int amount){
    if(amount<0){
        throw "enter valid amount";
    }
    else if((balance-=amount)<0){
        throw "enter amount less than balance to withdraw money ";
    }
    else{
        balance-+amount;
    }
}
};
// class exception{
//     string message;
// public:
//    exception(){
//     message="abc";
//    }
//    string what(){
//     return message;
//    }
// };
int main(){
    Person p1("akshit",0,001);
    try{p1.deposit(500);
    p1.withdraw(5000);
    p1.deposit(1500);}
    catch(const char*str){
        cout<<str;
    }
    exception e;
    cout<<endl;
    cout<<e.what();
    return 0;
    
=======
#include<iostream>
#include<exception>
using namespace std;
class Person{
string name;
double balance;
int accNo;
public:
Person(string name, double balance,int  accNo){
    this->name = name;
    this->balance=balance;
    this->accNo=accNo;
}
void deposit(int amount){
    if(amount>0){
        balance+=amount;
        cout<<"Your balance is: "<<balance<<endl;

    }
    else{
        throw "Amount  is less than 0";
    }
}
void withdraw(int amount){
    if(amount<0){
        throw "enter valid amount";
    }
    else if((balance-=amount)<0){
        throw "enter amount less than balance to withdraw money ";
    }
    else{
        balance-+amount;
    }
}
};
// class exception{
//     string message;
// public:
//    exception(){
//     message="abc";
//    }
//    string what(){
//     return message;
//    }
// };
int main(){
    Person p1("akshit",0,001);
    try{p1.deposit(500);
    p1.withdraw(5000);
    p1.deposit(1500);}
    catch(const char*str){
        cout<<str;
    }
    exception e;
    cout<<endl;
    cout<<e.what();
    return 0;
    
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01
}