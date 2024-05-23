#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(6);
    s.insert(6);
    s.insert(2);
    s.insert(1);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for (auto i : s)
    {
        cout<<i<<" ";
    }
    s.erase(s.begin());

    for (auto i : s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    cout<<"6 is present or not "<<s.count(6);
    

    return 0;
}
