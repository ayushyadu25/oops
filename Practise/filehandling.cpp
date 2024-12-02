<<<<<<< HEAD
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream o1("sample.txt");
    o1<<"hello guys"<<endl;
    o1<<"hello world"<<endl;
   
    string line;
    getline(o1,line);
    cout << line;
    return 0;        
}
=======
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream o1("sample.txt");
    o1<<"hello guys"<<endl;
    o1<<"hello world"<<endl;
   
    string line;
    getline(o1,line);
    cout << line;
    return 0;        
}
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01
