<<<<<<< HEAD
#include<iostream>
using namespace std;
class MatrixLargest{
    int arr[3][3] ;
public:
    MatrixLargest(int a[3][3]){
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr[i][j]=a[i][j];
            }
            
        }
        
    }
    void largest(){
        for (int i = 0; i < 3; i++)
        {
            int m =0;
            for (int j = 0; j < 3; j++)
            {
               if(arr[i][j]>=m) m=arr[i][j];
            }
            cout<<"largest element in row is "<<m<<endl;
        }
    }

};
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    MatrixLargest m1(a);
    m1.largest();
    return 0;
=======
#include<iostream>
using namespace std;
class MatrixLargest{
    int arr[3][3] ;
public:
    MatrixLargest(int a[3][3]){
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr[i][j]=a[i][j];
            }
            
        }
        
    }
    void largest(){
        for (int i = 0; i < 3; i++)
        {
            int m =0;
            for (int j = 0; j < 3; j++)
            {
               if(arr[i][j]>=m) m=arr[i][j];
            }
            cout<<"largest element in row is "<<m<<endl;
        }
    }

};
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    MatrixLargest m1(a);
    m1.largest();
    return 0;
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01
}