#include<iostream>
using namespace std;
char getMaxOccour(string s){
    int arr[26] = {0};
    for (int  i = 0; i < s.length(); i++)
    {
     char ch = s[i];
     int index = 0;
     index = ch - 'a';
     arr[index]++;
    }
    // get max
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i]; 
        }
    }
    return ans + 'a';
    
}
int main(){

    string word = "output";
    char ch = getMaxOccour(word);

    cout <<"max: "<<ch;




    return 0;
}