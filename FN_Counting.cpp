#include<iostream>
using namespace std;
void counting(int n){
    int i = 1;
    while (i<=n)
    {
        cout<<i<<" ";
        i++;
    }
    
}
int main(){
    int n;
    cin>>n;
    counting(n);

    return 0;
}