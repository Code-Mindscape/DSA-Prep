#include<iostream>
using namespace std;
int showUnique(int arr[], int size){
    int ans = 0;
    for (int i = 0; i < size; i ++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){

    // int N = 2M + 1; // Size of array
    // M => Same elements
    // 1 => Unique element

    int number[7] = {2,1,1,4,4,2,6};
    int size = sizeof(number)/sizeof(int);
    int ans = showUnique(number, size);
    cout <<" Unique number: " << ans << endl;
    return 0;
} 