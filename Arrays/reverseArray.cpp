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

// Using Arrays

int main(){

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    
    cout << "reversed arrays" <<endl;
    for (int i = n-1; i >= 0; i--)
    {
        /* code */
        cout << arr[i] <<" ";
    }

    
    
}