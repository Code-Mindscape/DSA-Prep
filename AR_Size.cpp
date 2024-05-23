#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int number[10] = {8};
    int size = sizeof(number)/sizeof(int);
    printArray(number,size);
    

    return 0;
}