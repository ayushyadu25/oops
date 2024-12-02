<<<<<<< HEAD
#include<iostream>
using namespace std;
class Time{
   int h;
   int m;
public:
   Time(){

   }
   void setTime(){
    cin>>h>>m;
   }
   void display(){
    cout<<h<<endl << m<<endl;
   }
friend Time operator +(Time o1,Time o2);
};
Time operator +(Time o1,Time o2){
Time t;
t.h=o1.h+o2.h;
t.m=o1.m+o2.m;
while(t.m>=60){
if(t.m>=60){
    t.m=t.m-60;
    t.h++;
}}

return t;
}
int main(){
    Time o1;
    Time o2;
    Time o3;
    o1.setTime();
    o2.setTime();
    
    o3=o1+o2;
    o3.display();
    return 0;
}

=======
#include<iostream>
using namespace std;
class Time{
   int h;
   int m;
public:
   Time(){

   }
   void setTime(){
    cin>>h>>m;
   }
   void display(){
    cout<<h<<endl << m<<endl;
   }
friend Time operator +(Time o1,Time o2);
};
Time operator +(Time o1,Time o2){
Time t;
t.h=o1.h+o2.h;
t.m=o1.m+o2.m;
while(t.m>=60){
if(t.m>=60){
    t.m=t.m-60;
    t.h++;
}}

return t;
}
int main(){
    Time o1;
    Time o2;
    Time o3;
    o1.setTime();
    o2.setTime();
    
    o3=o1+o2;
    o3.display();
    return 0;
}

>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01
