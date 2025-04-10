/******************************************************************************

Write a C++ to check if the given expression has balanced paranthesis.

*******************************************************************************/
#include <iostream>
#include<stack>
#include<string>
using namespace std;

bool validParenthesis(const string& str){
    stack<char> s;
    
    for (char ch : str){
        if (ch == '(' || ch == '{'){
            s.push(ch);
        }
        else if (ch == ')'){
            if (s.empty()||s.top()!='('){
                return false;
            }
            s.pop();
        }
        else if (ch == '}'){
            if(s.empty()||s.top()!='{'){
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

int main(){
    string s; 
    cout<<"Enter string : ";
    getline(cin,s);

    if (validParenthesis(s)){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
}