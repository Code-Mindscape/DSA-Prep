#include <iostream>
#include <vector>
using namespace std;
vector<int> reverse(vector<int> v, int index)
{
    int s = index + 1;     // Start
    int e = v.size() - 1; // End

    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{

    int index = 1;
    vector<int> v;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    print(v);
    cout<<endl;
    vector<int> reversed = reverse(v,index);
    print(reversed);
    return 0;
}