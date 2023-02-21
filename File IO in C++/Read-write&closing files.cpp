#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // // Connecting our files with hout stream
    // ofstream hout("sample60.txt");

    // // Creating a name string and filling it with the string entered by the user
    // cout<<"Enter your name ";
    // string name;
    // cin>>name;

    // // Writing a string to the file
    // hout<<"My name is " + name;

    // hout.close();

    ifstream hin("sample60.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is: "<<content;
    hin.close();
    
    return 0;
}