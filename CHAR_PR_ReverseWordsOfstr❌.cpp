#include<iostream>
using namespace std;
void reverse(string word, string words){
    int start = 0;
    int end = word.length()-1;
    string s = word;
    while (start<=end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }

}
void reverseWords(char arr[], int n){
    int i = 0;
    string reversedWords = "";
    string s1 = "";
    while(i<n)
    {
        int j = 0;
        while(arr[j] == ' ' || arr[j] == '\0')
        {
            s1.push_back(arr[i]);
            j++;
        }
        
        i++;
    }
    reverse(s1,reversedWords);
    
}
int main(){

    char name[11] = {'a','p','p','l','e',' ','a','p','p','l','e'};

    reverseWords(name,11);

    return 0;
}