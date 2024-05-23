#include <iostream>
using namespace std;
bool isEven(int n){

    if (n&1)
    {
        return 0;
    }
    else{
        return 1;
    }
    
}
int main()
{
    int a;
    cin>>a;
    if(isEven(a))
    {
        cout<<"number is Even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }

    return 0;
}