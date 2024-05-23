#include<iostream>
using namespace std;
bool isValid(char ch){
    if ((ch >= 'a' && ch <= 'z') ||(ch >= 'A' && ch <= 'Z') ||(ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
char toLowerCase(char ch){
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else {
        return ch - 'A' + 'a';
    }
    
}
bool ValidPalinDrome(string s){
    int start = 0;
    int end = s.length() - 1;
    while (start<=end)
    {
        if (s[start] != s[end])
        {
            return 0;
        }
        else{
            start++;
            end--;
        }
        return 1;
    }
    
}
bool isPalinDrome(string s){
    // Remove all symbols
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (isValid(s[i]))
        {
            temp.push_back(s[i]);
        }
        
    }

    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }

    return ValidPalinDrome(temp);
    
}
int main(){
string s = "a1q@z*ZQ1(A";
cout<< "Valid palin drome or Not? "<< isPalinDrome(s);

    return 0;
}