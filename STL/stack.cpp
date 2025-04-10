#include<iostream>
#include<stack>
using namespace std;
/*
    follows FILO or LIFO
    
*/

int main(){
    stack<string> s;
    s.push("Data");
    s.push("Structures");
    s.push("and");
    s.push("Algorithms");
    s.push("with C++");

    cout<<"Top Element : "<<s.top()<<endl;

    s.pop();
    cout<<"Top Element : "<<s.top()<<endl;



}