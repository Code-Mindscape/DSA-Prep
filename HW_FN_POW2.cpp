#include<iostream>
using namespace std;
bool CanWritePow2(int n){
    int oneS = 0; 
    while (n!=0)
    {
        if(n&1){
            oneS += 1;
        }
        n = n >> 1;
    }
    if (oneS == 1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main(){

    int number;
    cin >> number;
    int result = CanWritePow2(number);
    if (result == 1)
    {
        cout<<"It can be written.";
    }
    else{
        cout<<"It can't be written.";
    }
    
    
    return 0;
}