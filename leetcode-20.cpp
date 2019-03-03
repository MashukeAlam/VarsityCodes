#include<iostream>
#include<stack>
using namespace std;

stack <char> st;
bool isOpen(char c) {
    if(c == '(' || c == '{' || c == '[') return true;
    else return false;
}


bool matches(char c1, char c2) {
    if(c2 == ')' && c1 == '(') return true;
    else if(c2 == '}' && c1 == '{') return true;
    else if(c2 == ']' && c1 == '[') return true;
    else return false;
}


bool isValid(string s) {
    for(char c: s) {
        if(isOpen(c)) st.push(c);
        else{
            if(st.empty()) return false;
            else {
                if(matches(st.top(), c)) st.pop();
                else return false;
            }
        }
    }
    return st.empty();
}




int main() {
    
    cout << isValid("({})");

    // while (!st.empty()) 
    // { 
    //     cout << '\t' << st.top(); 
    //     st.pop(); 
    // } 
    // cout << '\n'; 

}