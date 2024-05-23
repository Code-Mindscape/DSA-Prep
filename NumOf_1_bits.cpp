#include<iostream>
using namespace std;
int main(){

    int number;
    cin>>number;
    int count = 0;

    while (number!=0)
    {
        if (number&1)
        {
            count++;
        }
            number = number>>1;
        
    }
    cout<<"Number of 1 bits: "<<count<<endl;
     


    return 0;
}