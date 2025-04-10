#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    //elements can be inserted in front or back
    d.push_front(2);
    d.push_back(1);
    d.push_front(3);
    d.push_back(4);
    d.push_front(5);
    d.push_back(6);
    d.push_front(7);

    d.pop_back();
    d.pop_front();

    cout<<"Front : "<<d.front()<<endl;
    cout<<"Back : "<<d.back()<<endl;

    cout<<"Print elements : ";
    for(int i:d){
        cout<<i<<" ";
    } cout<<endl;

    d.erase(d.begin(),d.begin()+1);

    cout<<"Print elements after erase() : ";
    for(int i:d){
        cout<<i<<" ";
    } cout<<endl;

    cout<<*d.begin()<<" "<<*d.end()<<endl; // last index is end-1 so d.end() is Iterator to one past the last element

    auto it = d.begin();
    cout << *it<<" ";    
    it++;           
    cout << *it; 

}