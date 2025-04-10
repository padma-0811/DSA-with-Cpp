#include <iostream>
#include <vector>
using namespace std;

/* Find duplicate in input vector where all the elements are 
between 1 to n-1 where one number is repeated twice*/

int findDuplicate(vector<int>  &arr){
    int ans = 0;
    for (int i = 0; i<arr.size(); i++){
        ans = ans^arr[i];
    }

    for (int i = 1; i<arr.size(); i++){
        ans^=i;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int duplicate = findDuplicate(arr);
    cout << "The duplicate number is: " << duplicate << endl;

    return 0;
}