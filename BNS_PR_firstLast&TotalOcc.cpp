#include <iostream>
using namespace std;

int leftOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - size) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }
        mid = start + (end - size) / 2;
    }
    return ans;
}
int RightOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - size) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid+1;
        }
        mid = start + (end - size) / 2;
    }
    return ans;
}
int main()
{
    int even[11] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5};
    int key = 3;
    int start = leftOcc(even, 11, key);
    int end = RightOcc(even, 11, key);
    cout <<"Start of Occ: "<< start << endl;
    cout <<"End of Occ: "<< end << endl;
    cout <<"Number of Occ: "<< ((end-start)+1) << endl;

    return 0;
}