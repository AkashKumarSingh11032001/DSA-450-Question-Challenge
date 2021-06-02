#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {7 ,10, 4 ,3 ,20, 15};
    int k = 3;

    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+size);

    int min = 0;
    
    for (int i = 0; i < k; i++)
    {
        if(arr[i] > min){
            min = arr[i];
        }
    }

    int max = arr[size-1];
    for (int i = size-1; i >= k; i--)
    {
        if(arr[i] < max){
            max = arr[i]; 
        }
    }
    
    cout<<"Min: "<<min<<endl;
    cout<<"Max: "<<max<<endl;

    
}