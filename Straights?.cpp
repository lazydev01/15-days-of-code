//Got this solution from LeetCode discuss
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int left = INT_MAX;
    int mid = INT_MAX;
    bool flag = false;
    for(int i=0; i<n; i++){
        if(arr[i]>mid){
            flag = true;
            break;
        }
        else if(arr[i]>left && arr[i]<mid){
            mid = arr[i];
        }
        else if(arr[i]<left){
            left = arr[i];
        }
    }
    if(flag){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
return 0;
}
