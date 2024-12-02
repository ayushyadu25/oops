<<<<<<< HEAD
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={10,4,6,8,9,3};
    for(int i=0;i<5;i++)
    {
        int index=i;
        for(int j=i+1;j<6;j++)
        {
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
=======
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={10,4,6,8,9,3};
    for(int i=0;i<5;i++)
    {
        int index=i;
        for(int j=i+1;j<6;j++)
        {
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01
}