#include <iostream>
using namespace std;

template <class T>
class Hp
{
public:
    T data;
    Hp(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Hp<T>::display()
{
    cout << data << endl;
}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"I am templatised func1() "<<a<<endl;
}

int main()
{
    // Hp<float> h1(5.6);
    // Hp<char> h2('c');
    // cout << h1.data << endl;
    // cout << h2.data << endl;
    // h1.display();
    // h2.display();

    func(4); // Exact match takes the highest priority
    func1(4);
    return 0;
}