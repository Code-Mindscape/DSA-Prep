#include<iostream>
using namespace std;
void reverse(char arr[],int n){
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
void print(char arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // Null operator => '\0'
    // reverse an array
    char name[5] = {'u','s','m','a','n'};
    print(name,5);
    reverse(name,5);
    print(name,5);

    return 0;
}