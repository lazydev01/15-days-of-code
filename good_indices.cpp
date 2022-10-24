#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> ans;
    for(int i=k; i<n-k; i++){
        bool ascending = true;
        bool descending = true;
        for(int j=0; j<k-1; j++){
            if(arr[i-k+j]<arr[i-k+j+1]){
                descending = false;
                break;
            }
            if(arr[i+j+1]>arr[i+j+2]){
                ascending = false;
                break;
            }
        }
        if(ascending && descending){
            ans.push_back(i);
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
return 0;
}
