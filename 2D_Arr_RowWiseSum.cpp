#include<iostream>
using namespace std;
void rowWiseSum(int arr[][4], int row, int col){
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout<<"Row "<<(i+1)<<": "<<sum;
        cout<<endl;
    }
}
int main(){
    //2d array
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    rowWiseSum(arr,3,4);
    
    return 0;
} 