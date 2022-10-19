/*Took help from Kadane's Algorithm*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int currentSum = 0;
    int maximumSum = INT_MIN;
    for(int i=0; i<n; i++){
        currentSum += arr[i];
        if(currentSum > maximumSum){
            maximumSum = currentSum;
        }
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    cout << maximumSum << endl;
return 0;
}
