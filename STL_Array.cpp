#include<iostream>
#include<array>
using namespace std;
int main(){

    int basicArray[3] = {1,2,3};

    // STL Array
    array<int,4> a = {1,2,3,4};

    // Accessing elements
    cout<<a[0]<<endl;
    cout<<a.at(0)<<endl;

    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    //Enpty or not
    cout<<a.empty()<<endl;

    //Size
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }

    


    return 0;
}