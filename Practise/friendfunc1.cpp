<<<<<<< HEAD
#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    
    public:
  
        ClassA() : numA(12) {}
        
    private:
        int numA;
        
        
         friend int add(ClassA, ClassB);
};

class ClassB {

    public:
     
        ClassB() : numB(1) {}
    
    private:
        int numB;
 
        friend int add(ClassA, ClassB);
};

int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
=======
#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    
    public:
  
        ClassA() : numA(12) {}
        
    private:
        int numA;
        
        
         friend int add(ClassA, ClassB);
};

class ClassB {

    public:
     
        ClassB() : numB(1) {}
    
    private:
        int numB;
 
        friend int add(ClassA, ClassB);
};

int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01
}