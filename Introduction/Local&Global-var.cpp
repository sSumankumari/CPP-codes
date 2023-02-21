#include<iostream>
using namespace std;

int a=8; // Global variable
void sum()
{
    cout<<a<<endl;
}

int main()
{
    int a=10; // Local variable
    cout<<a<<endl;
    sum();
    return 0;
}
