#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,string> map;

    map[1] = "Usman";
    map[2] = "NAM";
    map[13] = "UP";

    map.insert({5,"Bheem"});
    for (auto i : map )
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    map.erase(13);
    for (auto i : map )
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    return 0;
}
