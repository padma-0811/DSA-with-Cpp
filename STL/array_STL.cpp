#include<iostream>
#include<array>

using namespace std;
int main(){

    int arr[3] = {1,2,3}; //usual way

    array<int,4>a = {1,2,3,4}; //STL array - static - fixed size

    int size = a.size();

    //Traversing array
    for(int i : a){
        cout<<i<<" ";
    } cout<<endl;
    
    cout<<"Element at 2nd index : "<<a.at(2)<<endl;
    cout<<"Is the array empty? "<<a.empty()<<endl; 
    cout<<"First element : "<<a.front()<<endl;
    cout<<"Last element : "<<a.back()<<endl;


}