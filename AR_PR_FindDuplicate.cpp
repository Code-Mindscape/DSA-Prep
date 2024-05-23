#include<iostream>
using namespace std;
int findDuplicate(int arr[], int size){
    int ans = 0;
    for (int i = 0; i < size; i ++)
    {
        ans = ans^arr[i];
    }
    
    for (int i = 1; i < size; i ++)
    {
        ans = ans^i;
    }
    
    return ans;
}
int main(){

    int number[6] = {5,2,1,3,4,3};
    int size = sizeof(number)/sizeof(int);
    cout<<"Duplicate: "<<findDuplicate(number, size)<<endl;
    return 0;
} 