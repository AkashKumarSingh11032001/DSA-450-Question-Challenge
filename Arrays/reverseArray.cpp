// LunchTtime Sol.
#include <bits/stdc++.h>
using namespace std;

/* using vector
int main(){

    int n;
    cin >> n;

    vector<int> arr(n);
    for(auto &x: arr){
        cin >>x;
    }

    cout <<endl;

    reverse(arr.begin(),arr.end());

    cout << "Reversed array" <<endl;

    for(auto &x: arr){
        cout << x << " ";
    }
    

}
*/

/* n^2 complexity
// Using Arrays O[n^2]

int main(){

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        
        cin >> arr[i];
    }
    
    cout << "reversed arrays" <<endl;
    for (int i = n-1; i >= 0; i--)
    {
        
        cout << arr[i] <<" ";
    }

    
    
}
*/

// Complexity O(n)

void revSwap(int arr[],int start,int end){

    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = arr[temp];
        start++;
        end--;

    }
}

int main(){

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0,end = n-1;

    revSwap(arr,start,end);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<endl;
    }
    
    

}