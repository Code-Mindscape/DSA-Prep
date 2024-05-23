#include<iostream>
using namespace std;
int intersection(int arr1[], int arr2[], int m, int n){
    int i = 0, j = 0;
    while (i<m && j<n) {

        if(arr1[i] == arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else{
            j++;
        }
        
    }
    
    
}
int main(){

    int number1[6] = {1,2,2,2,3,4};
    int number2[4] = {2,2,3,3};
    // int size = sizeof(number)/sizeof(int);
    intersection(number1, number2 , 6, 4);
    return 0;
} 