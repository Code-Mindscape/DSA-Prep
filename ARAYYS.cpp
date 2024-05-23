#include<iostream>
using namespace std;
int main(){

    int arr[100];
    int i = 0;
    int value = 20;
    while (i<100)
    {
        arr[i] = value;
        i++;
    }
    i = 0;
    while (i<100)
    {
        cout<<arr[i]<<" ";
        i++;
    }
    

    return 0;
}