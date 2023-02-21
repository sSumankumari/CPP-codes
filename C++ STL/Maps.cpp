#include<iostream>
#include<map>
#include<string>

using namespace std;

// Map is an associative array
int main(){
    map<string, int> marksMap;
    marksMap["Harry"] = 97;
    marksMap["Jack"] = 70;
    marksMap["Rohan"] = 30;

    marksMap.insert({{"Jimmy", 169}, {"Joe", 187}, {"Sam", 163}});
    map<string, int> :: iterator itr;
    for(itr=marksMap.begin(); itr!=marksMap.end(); itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }
    cout<<"The size is: "<<marksMap.size()<<endl;
    cout<<"The max size is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is: "<<marksMap.empty()<<endl;

    return 0;
}