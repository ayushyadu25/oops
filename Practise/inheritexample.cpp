<<<<<<< HEAD
#include<iostream>

using namespace std;
 class A{
    public:
    int a,b;
    void csa()
    {
        cout<<"csa"<<endl;
    }
 };
 class B:public A{
    public:
    int x,y;
    void csa1(){
        cout<<"csa1";

    }
 };
 int main(){
    B obj;
    obj.csa();
    obj.csa1();
=======
#include<iostream>

using namespace std;
 class A{
    public:
    int a,b;
    void csa()
    {
        cout<<"csa"<<endl;
    }
 };
 class B:public A{
    public:
    int x,y;
    void csa1(){
        cout<<"csa1";

    }
 };
 int main(){
    B obj;
    obj.csa();
    obj.csa1();
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01
 }