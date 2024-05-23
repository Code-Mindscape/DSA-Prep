#include<iostream>
using namespace std;
string removeOccur(string s, string part){
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
    
}
int main(){

    string word = "daabcbaabcbc";
    string ans = removeOccur(word, "abc");

    cout<<"Ans: "<<ans;




    return 0;
}