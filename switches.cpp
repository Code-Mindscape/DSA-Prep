#include<iostream>
using namespace std;
int main(){

    int num = 1;
    char ch = '1';

    switch (num)
    {
    case '1':
    cout<<"Character Case"<<endl;
        break;
    case 1:
    cout<<"number Case"<<endl;
        break;
    
    default:
        break;
    }

    return 0;
}