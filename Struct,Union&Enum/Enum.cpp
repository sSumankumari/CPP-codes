#include <iostream>
using namespace std;
 
enum Meal
{
    breakfast,
    lunch,
    dinner
};
 
int main()
{
    Meal m1 = dinner;
    if (m1 == 2)
    {
        cout << "The value of dinner is " << dinner << endl;
    }
}