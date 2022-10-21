#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> ans;
    ans.push_back(arr[0]);
    int temp = arr[0];
    for(int i=0; i<n-1; i++){
        temp = arr[i]^arr[i+1];
        ans.push_back(temp);
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
