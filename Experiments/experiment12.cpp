<<<<<<< HEAD
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
bool isWordPresent(string sentence, string word)
{

    stringstream s(sentence);

    string temp;

    while (s >> temp)
    {
        if (temp.compare(word) == 0)
        {

            return true;
        }
    }
    return false;
}
int main()
{
    ofstream o1("logfile.txt");
    o1 << "[2023-12-1 10:00:00] Application started" << endl;
    o1 << "[2023-12-1 10:00:05] Error : Connection Failed" << endl;
    o1 << "[2023-12-1 10:10:00] Error : Database Error" << endl;
    o1 << "[2023-12-1 10:15:00] Warning: Close the Application" << endl;

    ofstream e1("error.txt");

    string line;
    string word = "Error";
    ifstream in("logfile.txt");
    while (in)
    {
        getline(in, line);
        if (isWordPresent(line, word) == true)
        {
            e1 << line << endl;
        }
        cout << line << endl;
    }
    return 0;
}
=======
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
bool isWordPresent(string sentence, string word)
{

    stringstream s(sentence);

    string temp;

    while (s >> temp)
    {
        if (temp.compare(word) == 0)
        {

            return true;
        }
    }
    return false;
}
int main()
{
    ofstream o1("logfile.txt");
    o1 << "[2023-12-1 10:00:00] Application started" << endl;
    o1 << "[2023-12-1 10:00:05] Error : Connection Failed" << endl;
    o1 << "[2023-12-1 10:10:00] Error : Database Error" << endl;
    o1 << "[2023-12-1 10:15:00] Warning: Close the Application" << endl;

    ofstream e1("error.txt");

    string line;
    string word = "Error";
    ifstream in("logfile.txt");
    while (in)
    {
        getline(in, line);
        if (isWordPresent(line, word) == true)
        {
            e1 << line << endl;
        }
        cout << line << endl;
    }
    return 0;
}
>>>>>>> aeef39029bae6fa4762930a7cf212d2170919c01
