#include<iostream>
using namespace std;
int toLowerCase(char ch){
    if (ch>= 'a' && ch<='z')
    {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
    
}
bool reverse(char arr[],int n){
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        if(toLowerCase(arr[s]) >= 'a' && toLowerCase(arr[s]) <= 'z' || arr[s] >= '0' && arr[s] <= '9' || toLowerCase(arr[e]) >= 'a' && toLowerCase(arr[e]) <= 'z' || arr[e] >= '0' && arr[e] <= '9'){
            if (toLowerCase(arr[s]) == toLowerCase(arr[e]))
            {
                s++;
                e--;
            }
            else{
                return 0;
            }    
        }
        
        
    }
    return 1;
}
int main(){
    // Null operator => '\0'
    // reverse an array
    char name[5] = {'N','o','o','/','n'};

    int ans = reverse(name,5);


    cout<<"Palin Drome or not? "<<ans;
    return 0;
}