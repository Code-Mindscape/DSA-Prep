#include <iostream>
#include <vector>
using namespace std;
int findArraySum(int arr1[], int m, int arr2[], int n, vector<int>& v)
{
    int i = m - 1;
    int j = n - 1;

    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = arr1[i];
        int val2 = arr1[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        int value = sum % 10;
        v.push_back(value);
        i--;
        j--;
    }
    while (i >= 0)
    {
        int sum = arr1[i] + carry;
        carry = sum / 10;
        int value = sum % 10;
        v.push_back(value);
        i--;
    }
    while (j >= 0)
    {
        int sum = arr1[j] + carry;
        carry = sum / 10;
        int value = sum % 10;
        v.push_back(value);
        j--;
    }
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        int value = sum % 10;
        v.push_back(value);
    }
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
    int arr1[3] = {9,9,9};
    int arr2[3] = {8,7,6};
    vector<int> nums;
    findArraySum(arr1, 3, arr2, 3, nums);
    print(nums);
    return 0;
}