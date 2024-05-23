#include<iostream>
using namespace std;
int setBits(int a, int b){
    int counter = 0;
    while (a!=0)
    {
        if(a&1){
            counter += 1;
        }
        a = a>>1;
    }
    while (b!=0)
    {
        if(b&1){
            counter += 1;
        }
        b = b>>1;
    }
    return counter;
}
int main(){
    int a, b;
    cin>>a;
    cin>>b;
    cout<<"Number of set bits: "<<setBits(a,b)<<endl;

    return 0;
}