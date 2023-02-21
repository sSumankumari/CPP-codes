#include<iostream>
using namespace std;

template <class T1=int, class T2=float, class T3=char>
class Memory{
    public:
        T1 a;
        T2 b;
        T3 c;
        Memory(T1 x, T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
        }
};

int main(){
    Memory<> m(4, 6.4, 'c');
    m.display();
    cout<<endl;
    Memory<float, char, char> m1(1.4, 'o', 'c');
    m1.display();
    return 0;
}