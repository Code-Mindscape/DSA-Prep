#include<iostream>
using namespace std;
int main(){

    //Program to subtract the sum and product of a number

    int number;
    cin>>number;
    int sum = 0;
    int product = 1;

    while (number!=0)
    {
        int digit = number % 10;
        product *= digit;
        sum += digit;
        number = number / 10;
    }
    int ans = product - sum;
    cout<<"The Ans: "<<ans<<endl;
     


    return 0;
}