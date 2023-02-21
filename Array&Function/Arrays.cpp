#include<iostream>
using namespace std;

int main(){
    // Array Example
    int marks[4] = {23, 45, 56, 89};

    int mathsMarks[4];
    mathsMarks[0] = 2278;
    mathsMarks[1] = 738;
    mathsMarks[2] = 378;
    mathsMarks[3] = 578;
    cout<<"These are maths marks:"<<endl;
    cout<<mathsMarks[0]<<endl;
    cout<<mathsMarks[1]<<endl;
    cout<<mathsMarks[2]<<endl;
    cout<<mathsMarks[3]<<endl;

    // You can change the value of an array
    marks[2] = 455;
    cout<<"These are marks:"<<endl;   
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }

    // int i=0;
    // while (i<4){
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    int i=0;
    do{
        cout<<i<<"\t"<<marks[i]<<endl;
        i++;
    }while(i<4);

    // Pointers and arrays
    
    int* p = marks;
    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;
    // cout<<"The value of *p is: "<<*p<<endl;    
    // cout<<"The value of *(p+1) is: "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is: "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is: "<<*(p+3)<<endl;
    
    return 0;
}