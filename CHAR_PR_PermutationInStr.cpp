#include<iostream>
using namespace std;
bool permutaion(string s1, string s2){
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    
    
    
}
int main(){

    string s1 = "ab";
    string s2 = "eidbaooo";
    permutaion(s1,s2);





    return 0;
}