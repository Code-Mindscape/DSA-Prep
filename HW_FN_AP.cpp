#include<iostream>
using namespace std;
int AP(int n){
    int AP = 3 * n + 7;
    return AP;

}
int main(){

    int n;
    cin >> n;
    cout<<n<<"th term: "<<AP(n)<<endl;

    return 0;
}