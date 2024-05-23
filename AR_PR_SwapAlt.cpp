#include<iostream>
using namespace std;
int SwapAlternate(int arr[], int size){
    int hold;
    int counter = 0;
    for (int i = 0; i < size; i += 2)
    {
        if ((i+1) < size)
        {
        hold = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = hold;  // My own logic here
        // swap(arr[i], arr[i + 1]); //Another way to swap
        }
        counter++;
    }
}
int main(){

    // int number[6] = {1,2,3,4,5,6};
    int number[9] = {2,15,11,10,20,16,34,58,90};
    int size = sizeof(number)/sizeof(int);
    SwapAlternate(number, size);

    for (int i = 0; i < size; i++)
    {
        cout << " " << number[i];
    }

    return 0;
}