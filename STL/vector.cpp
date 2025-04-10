#include<iostream>
#include<vector>
using namespace std;

/*
    Vector functions:
    vector <int> v; //declaration
    1. v.push_back(value);
    2. v.pop_back();
    3. v.size();
    4. v.empty(); //returns 0 if empty
    5. v.clear(); //empties the vector
    6. v.at(index); //access element at index 2
    7. v.front(); //First element
    8. v.back(); //Last element
    9. v.begin(); //index 0
    10. v.end(); //last index
    11. v.insert(v.begin()+1, 99); // syntax: insert(pos, value)
    12. v.erase(pos); //erases element at position 2
    13. v.erase(start,end); //erases element from pos start till end
    14. v.resize(5); // v has 5 elements now
    15. a.swap(b); //values of vector a and b are swapped
    16. v.assign(3, 7);  // v = [7, 7, 7]
*/

int main(){
    vector <int> v; //dynamic
    cout<<"Capacity -> "<<v.capacity()<<endl; // o/p: 0 

    v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl; // o/p: 1

    v.push_back(7);
    cout<<"Capacity -> "<<v.capacity()<<endl; // o/p: 2

    v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl; // o/p: 4 because capacity increases by double
    
    cout<<"Size : "<<v.size()<<endl; // o/p: 3

    cout<<"Element at second position : "<<v.at(2)<<endl;

    cout<<"First element : "<<v.front()<<endl;
    cout<<"Last element : "<<v.back()<<endl;

    cout<<"Elements before pop_back() : ";
    for(int i:v){
        cout<<i<<" ";
    } cout<<endl;

    v.pop_back();

    cout<<"Elements after pop_back() : ";
    for(int i:v){
        cout<<i<<" ";
    } cout<<endl;

    cout<<"Size before clear : "<<v.size()<<endl;
    v.clear();
    cout<<"Size after clear : "<<v.size()<<endl;
    
    vector <int> a(5,1); //size is 5, all initialised to 1

    cout<<"Print a : ";
    for(int i : a){
        cout<<i<<" ";
    } cout<<endl;
    
    vector<int> b(a); //a is copied to b
    cout<<"Print b : ";
    for(int i : b){
        cout<<i<<" ";
    } cout<<endl;
}