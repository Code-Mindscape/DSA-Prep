#include<iostream>
#include<vector>
using namespace std;
int main(){
    //Declaring vector 
    vector<int> v;
    vector<int> a(5,1);

    // copy of vector a
    vector<int> last(a);
 
    for (int i:last)
    {
        cout<<i<<" ";
    }
    // Capacity => space Assigned
    // Size => Number of elements

    cout<<"Cap: "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Cap: "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Cap: "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Cap: "<<v.capacity()<<endl;

    //size
    cout<<"Size: "<<v.size()<<endl;

    //Elements access
    cout<<"At 1 index: "<<v.at(1)<<endl;
    cout<<"At 1 index: "<<v[1]<<endl;
    
    cout<<"At front "<<v.front()<<endl;
    cout<<"At Back "<<v.back()<<endl;

    //Remove last element
    v.pop_back();

    for (int i:v)
    {
        cout<<i<<" ";
    }
    


    return 0;
}
