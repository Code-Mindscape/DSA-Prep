#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<" Finding 6 usnig binary Search "<<(binary_search(v.begin(),v.end(),6))<<endl;
    string abcd = "usman";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd;

    rotate(v.begin(),v.begin()+1,v.end());
    for (int i:v )
    {
            cout<<" "<<i;

    }
    cout<<endl;
    sort(v.begin(),v.end());
    for (int i:v )
    {
            cout<<" "<<i;

    }
    return 0;
}
