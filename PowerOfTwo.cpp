#include<iostream>
#include<climits>
using namespace std;
int main(){

    int num;
    cin>>num;
    int ans = 1;
    int sign = 0;

    for (int i= 0; i<30; i++) {
        if (ans==num) {
            sign = 1;
        }
        if (ans<INT_MAX/2)
        {
        ans = ans * 2;
        }
    }
    
    if (sign==1)
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    

    return 0;
}