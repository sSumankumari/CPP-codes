#include<iostream>

using namespace std;

int main(){
    /*Loop in C++:
    There are three types of loops in C++:
    1. For loop
    2. While loop
    3. Do-while loop
    */
    
    /*For loop in C++*/
    // int i=1;
    // cout<<i<<endl;
    // i++;

    // Syntax for For loop
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }


    // for (int i = 1; i <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    // Example of infinite for loop
    // for (int i = 1; i <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    /*While loop in C++*/
    // Syntax:
    // while(condition)
    // {
    //     C++ statements;
    //     i++;
    // }

    // Printing 1 to 40 using while loop
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of infinite while loop
    // int i=1;
    // while(true){
    //     cout<<i<<endl;
    //     i++;
    // }

    /*do-While loop in C++*/
    // Syntax:
    // do
    // {
    //     C++ statements;
    // }while(condition);

    // Printing 1 to 40 using do while loop
    int i=1;
    do
    {
        cout<<i<<endl;
        i++;
    }while(i<=40);
   
    return 0;
}