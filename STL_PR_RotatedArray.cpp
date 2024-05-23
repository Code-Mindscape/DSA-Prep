#include <iostream>
#include <vector>
using namespace std;
void Rotate(vector<int>& nums, int M)
{
    vector<int> temp(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + M) % nums.size()] = nums[i];
    }

    nums = temp;
}
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v = {2,7,4,6,3,9};
    int M = 2;
    print(v);
    Rotate(v, M);
    print(v);
    return 0;
}