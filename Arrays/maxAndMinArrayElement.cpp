#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int arr[] = {5,8,2,4,9,7};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     sort(arr,arr+size);

//     cout << "max: " << arr[size-1] <<endl;
//     cout << "min: " << arr[0];
// }

// using vectors
int main() {

    vector<int> arr{5,9,3,8,7,2,6};

    sort(arr.begin(),arr.end());
    
    cout << "Max: " <<arr[arr.size()-1] <<endl;
    cout << "Min: " <<arr[0] <<endl; 


}