#include<iostream>
using namespace std;
int PrintSum(int arr[], int size){
    int sum = 0;
    for (int i = 0; i<size; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<PrintSum(numbers, 10);
    return 0;
}