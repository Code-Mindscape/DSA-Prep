#include <iostream>
using namespace std;
bool isPresent(int arr[] ,int key, int size){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int array[10] = {1,2,3,4,76,64,128,256,21,12}; 
    int key;
    cin>>key;
    if (isPresent(array,key,10))
    {
        cout<<"Present";
    }
    else{
        cout<<"Not Present";
    }
    
    return 0;
}