#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> l;
    list<int> a(5,100);

    for (int i:a)
    {
        cout<<i<<" ";
    }
    
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    for (int i:l)
    {
        cout<<i<<" ";
    }
    


    

    return 0;
}
